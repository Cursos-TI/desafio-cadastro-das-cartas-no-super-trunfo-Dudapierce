#include <stdio.h>

int main() {
    // Carta 1
    printf("Desafio 1 - Cartas do Super Trunfo!\n");

    char estado1[20] = "MG";
    char codigo1[20] = "A32";
    int populacao1 = 540756;
    float area1 = 14357;
    char cidade1[30] = "Juiz de fora";
    double pib1 = 857600000000000;
    int turisticos1 = 32;

    printf("Digite o nome do estado:\n");
    scanf(" %[^\n]", estado1);

    printf("Digite o código do estado:\n");
    scanf("%s", codigo1);

    printf("Digite a população do estado:\n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado:\n");
    scanf("%f", &area1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite o PIB do estado:\n");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos1);

    // Carta 2
    printf("\nDesafio 2 - Cartas do Super Trunfo!\n");

    char estado2[20] = "DF";
    char codigo2[10] = "B61";
    int populacao2 = 2817381;
    float area2 = 5760784;
    char cidade2[30] = "Brasília";
    double pib2 = 32880000000000000.0;
    int turisticos2 = 32;

    printf("Digite o nome do estado:\n");
    scanf(" %[^\n]", estado2);

    printf("Digite o código do estado:\n");
    scanf("%s", codigo2);

    printf("Digite a população do estado:\n");
    scanf("%d", &populacao2);

    printf("Digite a área do estado:\n");
    scanf("%f", &area2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o PIB do estado:\n");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turisticos2);

    // Impressão
    printf("\n==============================\n");
    printf("       DADOS DA CARTA 1\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);

    printf("\n==============================\n");
    printf("       DADOS DA CARTA 2\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);

    return 0;
}