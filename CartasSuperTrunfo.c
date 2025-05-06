#include <stdio.h>

main(){
//Iniciando jogo super trunfo países 
//Primeiro estado


char estado1;
char codigo1[5];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

//Segundo estado

char estado2;
char codigo2[5];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;


//Iniciando jogo

printf("Super Trunfo Países!\n");
printf("Cadastre as informações das suas cartas e seus respectivos países.\n");
printf("Cadastre a primeira carta:\n");

printf("Cidade:\n");
scanf("%s", &cidade1);

printf("Em qual estado a cidade está localizada?\n");
printf("Insira uma letra de 'A a H' representando um dos oito estados.\n");
scanf("%s", &estado1);


printf("Qual o codigo da carta?\n");
printf("O codigo deve conter a letra representado por seu estado e digitos de 01 a 04 (ex: A01, A02)\n");
scanf("%s", &codigo1);

printf("Qual a população da cidade?\n");
scanf("%s", &populacao1);


printf("Qual a área da cidade em km²?\n");
scanf("%f", &area1);

printf("Qual o Produto Interno Bruto (PIB)?\n");
scanf("%f", &pib1);


printf("Qual a quantidade de pontos turísticos da cidade?\n");
scanf("%d", &pontosturisticos1);


//Apresentando na tela para o usuario as informaçoes da primeira carta

printf("CIDADE 1\n");

printf("Cidade: %s\n", cidade1);
printf("Estado: %s\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área em km²: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Pontos Turísticos: %d", pontosturisticos1);


//Seguindo para o cadastro da segunda carta e suas informaçoes


printf("Cadastre a segunda carta.\n");

printf("Cidade:\n");
scanf("%s", &cidade2);

printf("Em qual estado a cidade está localizada?\n");
printf("Insira uma letra de 'A a H' representando um dos oito estados.\n");
scanf("%s", &estado2);


printf("Qual o codigo da carta?\n");
printf("O codigo deve conter a letra representado por seu estado e digitos de 01 a 04 (ex: A01, A02)\n");
scanf("%s", &codigo2);

printf("Qual a população da cidade?\n");
scanf("%s", &populacao2);


printf("Qual a área da cidade em km²?\n");
scanf("%f", &area2);

printf("Qual o Produto Interno Bruto (PIB)?\n");
scanf("%f", &pib2);


printf("Qual a quantidade de pontos turísticos da cidade?\n");
scanf("%d", &pontosturisticos2);


//Apresentando na tela para o usuario as informaçoes da primeira carta

printf("CIDADE 2\n");

printf("Cidade: %s\n", cidade2);
printf("Estado: %s\n"), estado2;
printf("Código da carta: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área em km²: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Pontos Turísticos: %d", pontosturisticos2);

return 0;

}