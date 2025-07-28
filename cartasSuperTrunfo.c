#include <stdio.h>

int main() {
    // Desafio 1 - Cartas do Super Trunfo
    printf("Desafio 1- Cartas do Super Trunfo!\n");
    char estado1[20] = "MG";
    char codigo1[10] = "A32";
    int populacao1 = 540756;
    float area1 = 14357;
    char cidade1[20] = "Juiz de fora";
    float pib1 = 857600000000000;
    int turisticos1 = 32;  

    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo1);
    
    printf("Digite a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado: \n");
    scanf("%f", &area1);

    printf("Digite o nome da cidade \n");
    scanf("%s", cidade1);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    // Desafio 2 - Cartas do Super Trunfo
    printf("\nDesafio 2- Cartas do Super Trunfo!\n");
    char estado2[20] = "DF";
    char codigo2[10] = "A61";
    int populacao2 = 2817381;
    float area2 = 5760784;
    char cidade2[20] = "Brasília";
    float pib2 = 32880000000000000;
    int turisticos2 = 32;  

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo2);
    
    printf("Digite a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área do estado: \n");
    scanf("%f", &area2);

    printf("Digite o nome da cidade \n");
    scanf("%s", cidade2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    return 0;
}