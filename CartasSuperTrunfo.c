#include <stdio.h>
#include <string.h>

/*
SUPER TRUNFO
Autor: Deyvison Alcantara da Silva
Descrição:
  Este programa implementa o jogo Super Trunfo com duas cartas de cidades.
  O jogador escolhe DOIS atributos para comparar, e o programa determina
  qual cidade vence com base nas regras de comparação.
*/

int main()
{
  //  Declaração das variáveis
  // Cada carta terá informações básicas sobre uma cidade.

  char estado1[20], estado2[20];
  char codigo1[5], codigo2[5];
  char nome1[50], nome2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade1, densidade2;
  float pibPerCapita1, pibPerCapita2;

  // Entrada de dados da Carta 1

  printf("=== Cadastro da Carta 1 ===\n");
  printf("Estado: ");
  scanf("%s", estado1);
  printf("Código da carta: ");
  scanf("%s", codigo1);
  printf("Nome da cidade: ");
  scanf("%s", nome1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB (em bilhões): ");
  scanf("%f", &pib1);
  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cálculo da densidade populacional e PIB per capita
  densidade1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  // Entrada de dados da Carta 2

  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Estado: ");
  scanf("%s", estado2);
  printf("Código da carta: ");
  scanf("%s", codigo2);
  printf("Nome da cidade: ");
  scanf("%s", nome2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);
  printf("Número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da densidade populacional e PIB per capita da segunda carta
  densidade2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Menu de seleção de atributos
  int atributo1, atributo2;

  printf("\n=== MENU DE ATRIBUTOS ===\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Demográfica\n");
  printf("6 - PIB per Capita\n");

  // Primeira escolha do jogador
  printf("\nEscolha o primeiro atributo (1 a 6): ");
  scanf("%d", &atributo1);

  // Validação da escolha
  if (atributo1 < 1 || atributo1 > 6)
  {
    printf("Opção inválida! Encerrando o programa.\n");
    return 0;
  }

  // Exibição dinâmica do segundo menu (retira o atributo já escolhido)
  printf("\nEscolha o segundo atributo (diferente de %d):\n", atributo1);
  for (int i = 1; i <= 6; i++)
  {
    if (i != atributo1)
    {
      switch (i)
      {
      case 1:
        printf("1 - População\n");
        break;
      case 2:
        printf("2 - Área\n");
        break;
      case 3:
        printf("3 - PIB\n");
        break;
      case 4:
        printf("4 - Pontos Turísticos\n");
        break;
      case 5:
        printf("5 - Densidade Demográfica\n");
        break;
      case 6:
        printf("6 - PIB per Capita\n");
        break;
      }
    }
  }

  // Segunda escolha do jogador
  printf("\nEscolha o segundo atributo: ");
  scanf("%d", &atributo2);

  // Validação da segunda escolha
  if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1)
  {
    printf("Opção inválida! Os atributos devem ser diferentes e válidos.\n");
    return 0;
  }

  // Cálculo dos valores selecionados
  float valor1_A, valor2_A, valor1_B, valor2_B;
  char nomeAtributo1[30], nomeAtributo2[30];

  // Primeiro atributo
  switch (atributo1)
  {
  case 1:
    valor1_A = populacao1;
    valor2_A = populacao2;
    strcpy(nomeAtributo1, "População");
    break;
  case 2:
    valor1_A = area1;
    valor2_A = area2;
    strcpy(nomeAtributo1, "Área");
    break;
  case 3:
    valor1_A = pib1;
    valor2_A = pib2;
    strcpy(nomeAtributo1, "PIB");
    break;
  case 4:
    valor1_A = pontosTuristicos1;
    valor2_A = pontosTuristicos2;
    strcpy(nomeAtributo1, "Pontos Turísticos");
    break;
  case 5:
    valor1_A = densidade1;
    valor2_A = densidade2;
    strcpy(nomeAtributo1, "Densidade Demográfica");
    break;
  case 6:
    valor1_A = pibPerCapita1;
    valor2_A = pibPerCapita2;
    strcpy(nomeAtributo1, "PIB per Capita");
    break;
  }

  // Segundo atributo
  switch (atributo2)
  {
  case 1:
    valor1_B = populacao1;
    valor2_B = populacao2;
    strcpy(nomeAtributo2, "População");
    break;
  case 2:
    valor1_B = area1;
    valor2_B = area2;
    strcpy(nomeAtributo2, "Área");
    break;
  case 3:
    valor1_B = pib1;
    valor2_B = pib2;
    strcpy(nomeAtributo2, "PIB");
    break;
  case 4:
    valor1_B = pontosTuristicos1;
    valor2_B = pontosTuristicos2;
    strcpy(nomeAtributo2, "Pontos Turísticos");
    break;
  case 5:
    valor1_B = densidade1;
    valor2_B = densidade2;
    strcpy(nomeAtributo2, "Densidade Demográfica");
    break;
  case 6:
    valor1_B = pibPerCapita1;
    valor2_B = pibPerCapita2;
    strcpy(nomeAtributo2, "PIB per Capita");
    break;
  }

  // Comparação e soma dos atributos
  // Regra especial: Densidade menor vence
  float soma1 = valor1_A + valor1_B;
  float soma2 = valor2_A + valor2_B;

  printf("\n=== RESULTADO FINAL ===\n");
  printf("Carta 1: %s (%s)\n", nome1, estado1);
  printf("Carta 2: %s (%s)\n\n", nome2, estado2);
  printf("Atributos comparados:\n");
  printf("- %s\n- %s\n\n", nomeAtributo1, nomeAtributo2);

  // Exibe os valores de cada atributo
  printf("%s:\n  %s = %.2f | %s = %.2f\n", nomeAtributo1, nome1, valor1_A, nome2, valor2_A);
  printf("%s:\n  %s = %.2f | %s = %.2f\n", nomeAtributo2, nome1, valor1_B, nome2, valor2_B);

  // Mostra a soma dos atributos
  printf("\nSoma dos atributos:\n");
  printf("  %s = %.2f\n  %s = %.2f\n", nome1, soma1, nome2, soma2);

  // Determinação do vencedor final com operador ternário
  (soma1 > soma2)   ? printf("\nResultado: %s venceu!\n", nome1)
  : (soma2 > soma1) ? printf("\nResultado: %s venceu!\n", nome2)
                    : printf("\nResultado: Empate!\n");

  return 0;
}
