#include <stdio.h>

int main() {
    // Carta 1
    printf("Desafio 1 - Cartas do Super Trunfo!\n");

    char estado1[20] = "MG";
    char codigo1[10] = "A32";
    int populacao1  = 540756;
    float area1 = 14357;
    char cidade1[30] = "Juiz de Fora";
    double pib1 = 857600000000000.0;
#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1[20] = "MG";
    char codigo1[10] = "A32";
    char cidade1[30] = "Juiz de Fora";
    int populacao1 = 540756; // em habitantes
    int turisticos1 = 32; // número de pontos turísticos
    float area1 = 14357.0; // em km²
    float densidade1 = 376.64; // hab./km²
    double pib1 = 857600000000000.0; // em bilhões de reais
    double pibPerCapita1 = 6200.0; // em reais

    // Leitura da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos1);

    // Cálculo da densidade e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // Dados da carta 2
    char estado2[20] = "DF";
    char codigo2[10] = "B61";
    char cidade2[30] = "Brasília";
    int populacao2 = 2817381; // em habitantes
    int turisticos2 = 32; // número de pontos turísticos
    float area2 = 5760784.0; // em km²
    float densidade2 = 489.1; // hab./km²
    double pib2 = 32880000000000000.0; // em bilhões de reais
    double pibPerCapita2 = 116713.39; // em reaisS

    // Leitura da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos2);

    // Cálculo da densidade e PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Impressão dos dados
    printf("\n==============================\n");
    printf("       DADOS DA CARTA 1\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n==============================\n");
    printf("       DADOS DA CARTA 2\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
