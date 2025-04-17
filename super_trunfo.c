#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa semente para números aleatórios
    srand(time(NULL));

    // --- Carta 1 ---
    char estado1[5], codigo1[4], cidade1[20];
    unsigned long populacao1;
    double area1, pib1;
    int pontosTuristicos1;
    int ataque1, defesa1, recuo1;

    // Dados da Carta 1
    printf("Digite o Estado da Carta 1 (ex: SP):\n");
    scanf("%s", estado1);
    printf("Digite o Código da Carta 1 (ex: A01):\n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade da Carta 1:\n");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População da Carta 1:\n");
    scanf("%lu", &populacao1);
    printf("Digite a Área da Carta 1 (km²):\n");
    scanf("%lf", &area1);
    printf("Digite o PIB da Carta 1 (em bilhões):\n");
    scanf("%lf", &pib1);
    printf("Digite o Número de Pontos Turísticos da Carta 1:\n");
    scanf("%d", &pontosTuristicos1);

    // Escolha do modo de Ataque/Defesa/Recuo para Carta 1
    int modo1;
    printf("\nCarta 1: inserir manualmente (1) ou sortear automaticamente (2)?\n");
    scanf("%d", &modo1);

    if (modo1 == 1) {
        printf("Digite o Ataque (0-100):\n"); scanf("%d", &ataque1);
        printf("Digite a Defesa (0-100):\n");  scanf("%d", &defesa1);
        printf("Digite o Recuo (0-100):\n");  scanf("%d", &recuo1);
    } else {
        ataque1 = rand() % 101;
        defesa1 = rand() % 101;
        recuo1 = rand() % 101;
        printf("Carta 1 atributos sorteados -> Ataque: %d, Defesa: %d, Recuo: %d\n",
               ataque1, defesa1, recuo1);
    }

    // --- Carta 2 ---
    char estado2[5], codigo2[4], cidade2[20];
    unsigned long populacao2;
    double area2, pib2;
    int pontosTuristicos2;
    int ataque2, defesa2, recuo2;

    // Dados da Carta 2
    printf("\nDigite o Estado da Carta 2 (ex: SP):\n");
    scanf("%s", estado2);
    printf("Digite o Código da Carta 2 (ex: B01):\n");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade da Carta 2:\n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População da Carta 2:\n");
    scanf("%lu", &populacao2);
    printf("Digite a Área da Carta 2 (km²):\n");
    scanf("%lf", &area2);
    printf("Digite o PIB da Carta 2 (em bilhões):\n");
    scanf("%lf", &pib2);
    printf("Digite o Número de Pontos Turísticos da Carta 2:\n");
    scanf("%d", &pontosTuristicos2);

    // Escolha do modo de Ataque/Defesa/Recuo para Carta 2
    int modo2;
    printf("\nCarta 2: inserir manualmente (1) ou sortear automaticamente (2)?\n");
    scanf("%d", &modo2);

    if (modo2 == 1) {
        printf("Digite o Ataque (0-100):\n"); scanf("%d", &ataque2);
        printf("Digite a Defesa (0-100):\n");  scanf("%d", &defesa2);
        printf("Digite o Recuo (0-100):\n");  scanf("%d", &recuo2);
    } else {
        ataque2 = rand() % 101;
        defesa2 = rand() % 101;
        recuo2 = rand() % 101;
        printf("Carta 2 atributos sorteados -> Ataque: %d, Defesa: %d, Recuo: %d\n",
               ataque2, defesa2, recuo2);
    }

    // --- Cálculo de Atributos Adicionais ---
    double densidade1 = (double)populacao1 / area1;
    double pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    double superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1
                        + pibPerCapita1 + (1.0 / densidade1)
                        + ataque1 + defesa1 + recuo1;

    double densidade2 = (double)populacao2 / area2;
    double pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    double superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2
                        + pibPerCapita2 + (1.0 / densidade2)
                        + ataque2 + defesa2 + recuo2;

    // --- Seleção de Atributos para Comparação ---
    int primeiro, segundo;

    // Variáveis para armazenar os valores escolhidos:
    double valor1A1 = 0;  // valor do primeiro atributo da Carta 1
    double valor1A2 = 0;  // valor do primeiro atributo da Carta 2
    double valor2A1 = 0;  // valor do segundo atributo da Carta 1
    double valor2A2 = 0;  // valor do segundo atributo da Carta 2

    // Menu de seleção de atributos
    printf("\n***** Escolha o primeiro atributo para comparar *****\n");
    printf("1-População  2-Área  3-PIB  4-Pontos Turísticos  5-Densidade Populacional\n");
    printf("6-PIB per capita  7-Super Poder  8-Ataque  9-Defesa  10-Recuo\n");
    scanf("%d", &primeiro);

    printf("\n***** Escolha o segundo atributo (diferente) *****\n");
    printf("1-População  2-Área  3-PIB  4-Pontos Turísticos  5-Densidade Populacional\n");
    printf("6-PIB per capita  7-Super Poder  8-Ataque  9-Defesa  10-Recuo\n");
    scanf("%d", &segundo);

    // Atribuição via switch
    switch (primeiro) {
        case 1: 
            valor1A1 = populacao1; 
            valor1A2 = populacao2; 
                break;

        case 2: 
            valor1A1 = area1;      
            valor1A2 = area2;     
                break;

        case 3: 
            valor1A1 = pib1;       
            valor1A2 = pib2;      
                break;

        case 4: 
            valor1A1 = pontosTuristicos1; 
            valor1A2 = pontosTuristicos2; 
                break;

        case 5: 
            valor1A1 = densidade1; 
            valor1A2 = densidade2; 
                break;

        case 6: 
            valor1A1 = pibPerCapita1; 
            valor1A2 = pibPerCapita2; 
                break;

        case 7: 
            valor1A1 = superPoder1;  
            valor1A2 = superPoder2; 
                break;

        case 8: 
            valor1A1 = ataque1;     
            valor1A2 = ataque2;    
                break;

        case 9: 
            valor1A1 = defesa1;     
            valor1A2 = defesa2;    
                break;

        case 10: 
            valor1A1 = recuo1;     
            valor1A2 = recuo2;     
                break;

    }

    switch (segundo) {
        case 1: 
            valor2A1 = populacao1; 
            valor2A2 = populacao2; 
                break;

        case 2: 
            valor2A1 = area1;      
            valor2A2 = area2;     
                break;

        case 3: 
            valor2A1 = pib1;       
            valor2A2 = pib2;      
                break;

        case 4: 
            valor2A1 = pontosTuristicos1; 
            valor2A2 = pontosTuristicos2; 
                break;

        case 5: 
            valor2A1 = densidade1; 
            valor2A2 = densidade2; 
            break;

        case 6: 
            valor2A1 = pibPerCapita1; 
            valor2A2 = pibPerCapita2; 
                break;

        case 7: 
            valor2A1 = superPoder1;  
            valor2A2 = superPoder2; 
                break;

        case 8: 
            valor2A1 = ataque1;     
            valor2A2 = ataque2;    
                break;

        case 9: 
            valor2A1 = defesa1;     
            valor2A2 = defesa2;    
                break;

        case 10: 
            valor2A1 = recuo1;     
            valor2A2 = recuo2;     
                break;
    }

    // Cálculo das somas (ajuste para densidade)
    double soma1 = (primeiro == 5 ? -valor1A1 : valor1A1)
                 + (segundo  == 5 ? -valor2A1 : valor2A1);
    double soma2 = (primeiro == 5 ? -valor1A2 : valor1A2)
                 + (segundo  == 5 ? -valor2A2 : valor2A2);

    // Exibição do resultado
    printf("\n=== RESULTADO ===\n");
    printf("%s vs %s\n", cidade1, cidade2);
    printf("Atributo 1 -> %.2f vs %.2f\n", valor1A1, valor1A2);
    printf("Atributo 2 -> %.2f vs %.2f\n", valor2A1, valor2A2);
    printf("Soma %s: %.2f\n", cidade1, soma1);
    printf("Soma %s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
        printf("Vitória de %s!\n", cidade1);
    else if (soma2 > soma1)
        printf("Vitória de %s!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}
