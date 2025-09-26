#include <stdio.h>

int main() {

//variaveis da primeira carta
  
char Codigo1[4];
char Estado1[20];
unsigned long int populacao1;
float area1;
float PIB1;
int pontosTuristicos1;
char NomedaCidade1[30];


//variaveis da segunda carta

char Codigo2[4];
char Estado2[20];
unsigned long int populacao2;
float area2;
float PIB2;
int pontosTuristicos2;
char NomedaCidade2[30];




// Primeira carta

printf("Qual será o Estado escolhido?\n");
scanf("%s", Estado1);

printf("Cadastro da primeira carta"); 
printf(" O código deve ter até 4 caracteres\n"); 
scanf("%s", Codigo1);

printf("Qual o nome da cidade?\n"); 
scanf("%s", NomedaCidade1);

printf("Qual a população da cidade?\n"); 
scanf("%lu", &populacao1);

printf("Qual seria o PIB da mesma?\n"); 
scanf("%f", &PIB1);

printf("Qual seria a área da cidade? \n"); 
scanf("%f", &area1);

printf("Quantos pontos turísticos existem na cidade?\n"); 
scanf("%d", &pontosTuristicos1);

float densidadepopulacional1 = (populacao1 / area1);
float pibpercapita1 = (PIB1 / (float) populacao1);

//Super Poder da carta1
double superpodercarta1 = ((float) populacao1 + PIB1 + area1 + pontosTuristicos1 + pibpercapita1 + (1.0 / densidadepopulacional1));


//Segunda carta

printf("Qual será o Estado escolhido?\n"); 
scanf("%s", Estado2);

printf("Cadastro da segunda carta");
printf(" O código deve ter até 4 caracteres\n"); 
scanf("%s", Codigo2);

printf("Qual o nome da cidade?\n"); 
scanf("%s", NomedaCidade2);

printf("Qual a população da cidade?\n"); 
scanf("%lu", &populacao2);

printf("Qual seria o PIB da mesma?\n"); 
scanf("%f", &PIB2);

printf("Qual seria a área da cidade?\n"); 
scanf("%f", &area2);

printf("Quantos pontos turísticos existem na cidade?\n"); 
scanf("%d", &pontosTuristicos2);

float densidadepopulacional2 = (populacao2 / area2);
float pibpercapita2 = (PIB2 / (float) populacao2);

//Super Poder da carta2
double superpodercarta2 = ((float) populacao2 + PIB2 + area2 + pontosTuristicos2 + pibpercapita2 + (1.0 / densidadepopulacional2) );




// Exibição do Cadastro1

printf("\n---- Carta 1 ----\n");
printf("Estado: %s\n", Estado1);
printf("Código da carta: %s\n", Codigo1);
printf("Cidade: %s\n", NomedaCidade1);
printf("População: %lu habitantes\n", populacao1);
printf("PIB: %.2f bilhões\n", PIB1); 
printf("Área: %.2f km²\n", area1);
printf("Pontos turísticos: %d\n", pontosTuristicos1);
printf("A Densidade Populacional é de: %.3f\n", densidadepopulacional1);
printf("O PIB per Capita é: %.2f\n", pibpercapita1);
printf("O Super Poder da carta é!: %.3f\n", superpodercarta1);


// Exibição do Cadastro2

printf("\n---- Carta 2 ----\n");
printf("Estado: %s\n", Estado2);
printf("Código da carta: %s\n", Codigo2);
printf("Cidade: %s\n", NomedaCidade2);
printf("População: %lu habitantes\n", populacao2);
printf("PIB: %.2f bilhões\n", PIB2); 
printf("Área: %.2f km²\n", area2); 
printf("Pontos turísticos: %d\n", pontosTuristicos2);
printf("A Densidade Populacional é de: %.4f\n", densidadepopulacional2);
printf("O PIB per Capita é: %.2f\n", pibpercapita2);
printf("O Super Poder da carta é!: %.3f\n", superpodercarta2);


//CONFRONT0!

printf("FIGHT\n");

printf("A Carta 1 é representada pelo número (1), e a Carta 2 por (0)\n");

printf("(População) Vencedor!: (%d)\n", populacao1 > populacao2);
printf("(Area) Vencedor!: (%d)\n", area1 > area2);
printf("(PIB) Vencedor!: (%d)\n", PIB1 > PIB2);
printf("(Pontos Turísticos) Vencedor!: (%d)\n", pontosTuristicos1 > pontosTuristicos2);
printf("(Densidade Populacional) Vencedor!: (%d)\n", densidadepopulacional1 < densidadepopulacional2); 
printf("(PIB per Capita) Vencedor!: (%d)\n", pibpercapita1 > pibpercapita2);
printf("(Super Poder) Vencedor!: (%d)\n", superpodercarta1 > superpodercarta2);




    return 0;
}
