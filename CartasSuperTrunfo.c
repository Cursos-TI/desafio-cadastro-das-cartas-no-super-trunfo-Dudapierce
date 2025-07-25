#include <stdio.h>

int main() {
    char estado[20] = "DF";
    char codigo[10] = "A61";
    int populacao = ("2817381");
    float area = 5760784;
    char cidade[20] = "Brasília";
    float pib = 32880000000000000;
    int turisticos = 32;  


    printf("Digite o nome do estado: \n");
    scanf("%s", estado);


    printf("Digite o código do estado: \n");
    scanf("%s", codigo);
    
    printf("Digite a população do estado: \n");
    scanf("%d", &populacao);

    printf("Digite a área do estado: \n");
    scanf("%f", &area);

    printf("Digite o nome da cidade \n");
    scanf("%s", cidade);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos);

    return 0;
}