#include <stdio.h>

int main() {
    // Declaração das Variáveis da Carta 1
    char Estado1[5], CodigodeCarta1[4], Cidade1[20];
    unsigned long int Populacao1;
    double area1, PIB1, DensidadePopulacional1, PIBpercapita1, SuperPoder1;
    int NumerosdePontosTuristicos1;

    // Declaração das Variáveis da Carta 2
    char Estado2[5], CodigodeCarta2[4], Cidade2[20];
    unsigned long int Populacao2;
    double area2, PIB2, DensidadePopulacional2, PIBpercapita2, SuperPoder2;
    int NumerosdePontosTuristicos2;

    // Entrada de dados Carta 1
    printf("Digite o Estado da Primeira Carta (ex: SP):\n");
    scanf("%s", Estado1);
    printf("Digite o Código da Primeira Carta (ex: A01):\n");
    scanf("%s", CodigodeCarta1);
    printf("Digite o Nome da Cidade da Primeira Carta:\n");
    scanf(" %[^\n]", Cidade1);
    printf("Digite a População da Primeira Carta:\n");
    scanf("%lu", &Populacao1);
    printf("Digite a Área da Primeira Carta:\n");
    scanf("%lf", &area1);
    printf("Digite o PIB da Primeira Carta (em bilhões):\n");
    scanf("%lf", &PIB1);
    printf("Digite o Número de Pontos Turísticos da Primeira Carta:\n");
    scanf("%d", &NumerosdePontosTuristicos1);

    // Entrada de dados Carta 2
    printf("\nDigite o Estado da Segunda Carta (ex: SP):\n");
    scanf("%s", Estado2);
    printf("Digite o Código da Segunda Carta (ex: B01):\n");
    scanf("%s", CodigodeCarta2);
    printf("Digite o Nome da Cidade da Segunda Carta:\n");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a População da Segunda Carta:\n");
    scanf("%lu", &Populacao2);
    printf("Digite a Área da Segunda Carta:\n");
    scanf("%lf", &area2);
    printf("Digite o PIB da Segunda Carta (em bilhões):\n");
    scanf("%lf", &PIB2);
    printf("Digite o Número de Pontos Turísticos da Segunda Carta:\n");
    scanf("%d", &NumerosdePontosTuristicos2);

    // Cálculos
    DensidadePopulacional1 = Populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / Populacao1;
    SuperPoder1 = Populacao1 + area1 + PIB1 + NumerosdePontosTuristicos1 + PIBpercapita1 + (1.0 / DensidadePopulacional1);

    DensidadePopulacional2 = Populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / Populacao2;
    SuperPoder2 = Populacao2 + area2 + PIB2 + NumerosdePontosTuristicos2 + PIBpercapita2 + (1.0 / DensidadePopulacional2);

    // Menu para escolha de dois atributos
    int atributo1, atributo2;
    double valor1_carta1 = 0, valor1_carta2 = 0;
    double valor2_carta1 = 0, valor2_carta2 = 0;

    // Primeiro atributo
    printf("\n--- Escolha o primeiro atributo para comparar ---\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional (menor vence)\n6 - PIB per capita\n7 - Super Poder\n");
    scanf("%d", &atributo1);

    // Segundo atributo (menu dinâmico)
    printf("\n--- Escolha o segundo atributo (diferente do primeiro) ---\n");
    for (int i = 1; i <= 7; i++) {
        if (i != atributo1) {
            printf("%d - ", i);
            switch(i) {
                case 1: printf("População\n"); break;
                case 2: printf("Área\n"); break;
                case 3: printf("PIB\n"); break;
                case 4: printf("Pontos Turísticos\n"); break;
                case 5: printf("Densidade Populacional\n"); break;
                case 6: printf("PIB per capita\n"); break;
                case 7: printf("Super Poder\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // Valores do primeiro atributo
    switch (atributo1) {
        case 1: 
            valor1_carta1 = Populacao1; valor1_carta2 = Populacao2; 
        break;

        case 2: 
            valor1_carta1 = area1; valor1_carta2 = area2; 
        break;

        case 3: 
            valor1_carta1 = PIB1; valor1_carta2 = PIB2; 
        break;

        case 4: 
            valor1_carta1 = NumerosdePontosTuristicos1; valor1_carta2 = NumerosdePontosTuristicos2; 
         break;

        case 5: 
            valor1_carta1 = DensidadePopulacional1; valor1_carta2 = DensidadePopulacional2; 
        break;

        case 6: 
            valor1_carta1 = PIBpercapita1; valor1_carta2 = PIBpercapita2; 
        break;

        case 7:
            valor1_carta1 = SuperPoder1; valor1_carta2 = SuperPoder2; 
        break;

        default: 
            printf("Atributo 1 inválido.\n");
        break;
    }

    // Valores do segundo atributo
    switch (atributo2) {

        case 1: 
            valor2_carta1 = Populacao1; valor2_carta2 = Populacao2; 
        break;
        
        case 2: 
            valor2_carta1 = area1; valor2_carta2 = area2; 
        break;
        
        case 3: 
            valor2_carta1 = PIB1; valor2_carta2 = PIB2; 
        break;

        case 4: 
            valor2_carta1 = NumerosdePontosTuristicos1; valor2_carta2 = NumerosdePontosTuristicos2; 
        break;

        case 5: 
            valor2_carta1 = DensidadePopulacional1; valor2_carta2 = DensidadePopulacional2; 
        break;

        case 6: 
            valor2_carta1 = PIBpercapita1; valor2_carta2 = PIBpercapita2; 
        break;
        case 7: 
            valor2_carta1 = SuperPoder1; valor2_carta2 = SuperPoder2; 
        break;

        default: printf("Atributo 2 inválido.\n");
        break;
    }

    // Soma final ajustado para a regra da densidade (menor vence)
    double soma1 = (atributo1 == 5 ? -valor1_carta1 : valor1_carta1) + (atributo2 == 5 ? -valor2_carta1 : valor2_carta1);
    double soma2 = (atributo1 == 5 ? -valor1_carta2 : valor1_carta2) + (atributo2 == 5 ? -valor2_carta2 : valor2_carta2);

    // Resultado do Jogo
    printf("\n***** RESULTADO DA COMPARAÇÃO *****\n");
    printf("Cidade 1: %s\n", Cidade1);
    printf("Cidade 2: %s\n", Cidade2);
    printf("Atributo %d -> %.2f vs %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("Atributo %d -> %.2f vs %.2f\n", atributo2, valor2_carta1, valor2_carta2);
    printf("Soma %s: %.2f\n", Cidade1, soma1);
    printf("Soma %s: %.2f\n", Cidade2, soma2);

    if (soma1 > soma2)
        printf("Vitória de %s!\n", Cidade1);
    else if (soma2 > soma1)
        printf("Vitória de %s!\n", Cidade2);
    else
        printf("Empate!\n");

    return 0;
}
