#include <stdio.h>
// Desafio Super Trunfo 
// Tema 2 - Comparação das Cartas

int main() {
    // Dados da Carta 1
    char estado1[] = "São Paulo";
    char codigo1[] = "SP01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 260000000000.0;
    int pontosTuristicos1 = 150;

    // Dados da Carta 2
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "RJ01";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1182.30;
    float pib2 = 140000000000.0;
    int pontosTuristicos2 = 120;

    // Cálculo dos indicadores
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição das informações principais
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    // Comparação usando if e else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    return 0;
}