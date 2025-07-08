// Desafio Super Trunfo - Países

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  char estado1[20];
  char estado2[20];
  char cidade1[20];
  char cidade2[20];
  char codigo1[5];
  char codigo2[5];
  int populacao1;
  int populacao2;
  float area1;
  float area2;
  float pib1;
  float pib2;
  int pontosturisticos1;
  int pontosturisticos2;
  float densidadepopulacional1;
  float densidadepopulacional2;
  float pibpercapita1;
  float pibpercapita2;
  float superpodercarta1;
  float superpodercarta2;
  int opcao;

  // Cadastramento das cartas
  // Carta 1

  printf("Iniciando o jogo...\n");
  printf("Digite o nome do estado: \n");
  scanf(" %s", estado1);
  printf("Digite a cidade: \n");
  scanf("%s", cidade1);
  printf("Digite o codigo da carta: \n");
  scanf("%s", codigo1);
  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao1);
  printf("Digite  a area da cidade: \n");
  scanf("%f", &area1);
  printf("Digite o pib da cidade: \n");
  scanf("%f", &pib1);
  printf("Digite os pontos turisticos da cidade: \n");
  scanf("%d", &pontosturisticos1);

  // Carta 2

  printf("Digite o nome do estado: \n");
  scanf("%s", estado2);
  printf("Digite a cidade: \n");
  scanf("%s", cidade2);
  printf("Digite o código da carta: \n");
  scanf("%s", codigo2);
  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao2);
  printf("Digite a area da cidade: \n");
  scanf("%f", &area2);
  printf("Digite o pib da cidade: \n");
  scanf("%f", &pib2);
  printf("Digite pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos2);

  // printf("***  cálculo de densidade populacional ***\n");

  densidadepopulacional1 = (float)populacao1 / area1;
  densidadepopulacional2 = (float)populacao2 / area2;

  // printf("***  PIB per capta ***\n");

  pibpercapita1 = (float)pib1 / populacao1;
  pibpercapita2 = (float)pib2 / populacao2;

  // soma do super poder

  superpodercarta1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
  superpodercarta2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

  // imprimindo dados carta 1 e carta 2

  printf("codigo da carta: %s\n", codigo1);
  printf("População: %d habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", pontosturisticos1);
  printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
  printf("PIB per Capta: %.2f reais \n", pibpercapita1);
  printf("O superpoder carta1: %.2f\n", superpodercarta1);

  printf("\nCarta 2\n");
  printf("codigo da carta: %s\n", codigo2);
  printf("População: %d habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
  printf("PIB per Capta: %.2f reais \n", pibpercapita2);
  printf("O superpoder carta2: %.2f\n", superpodercarta2);

  printf("***Menu de comparação***\n");

  printf("Escolha uma opção para comparar os atributos (você tem 3 opções): \n");
  printf("1. Area \n");
  printf("2. Densidade \n");
  printf("3. Pontos turisticos \n");
  scanf("%d", &opcao);


  // comparação das cartas 

  switch (opcao)
  {
  case 1:
    printf(" carta 1 - : %s %fkm²\n", cidade1, area1);
    printf(" carta 2 - : %s %fkm²\n", cidade2, area2);
    if (area1 > area2)
    {
      printf("Resultado: carta 1 venceu!\n");
    }
    else if (area1 < area2)
    {
      printf("Resultado: carta2 venceu!\n");
    }
    else
    {
      printf("resultado: Empate!\n");
    }

    break;

  case 2:
    printf(" carta 1 - : %s %f hbkm²\n", cidade1, densidadepopulacional1);
    printf(" carta 2 - : %s %f hbkm²\n", cidade2, densidadepopulacional2);

    if (densidadepopulacional1 < densidadepopulacional1)
    {
      printf("Resultado: carta 1 venceu!\n");
    }
    else if (densidadepopulacional1 > densidadepopulacional2)
    {
      printf("Resultado: carta2 venceu!\n");
    }
    else
    {
      printf("resultado: Empate!\n");
    };
    break;

  case 3:
    printf(" carta 1 - %s:  %d\n", cidade1, pontosturisticos1);
    printf(" carta 2 - %s:  %d\n", cidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2)
    {
      printf("Resultado: carta 1 venceu!\n");
    }
    else if (pontosturisticos1 < pontosturisticos2)
    {
      printf("Resultado: carta2 venceu!\n");
    }
    else
    {
      printf("resultado: Empate!\n");
    }
    break;

  default:
    printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}