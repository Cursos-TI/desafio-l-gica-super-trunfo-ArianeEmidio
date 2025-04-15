#include <stdio.h>

int main() {

    //Declaração das Variaveis da Carta 1
    char Estado1[5], CodigodeCarta1[4], Cidade1[20];
    unsigned long int Populacao1;
    double area1, PIB1, DensidadePopulacional1, PIBpercapita1, SuperPoder1;
    int NumerosdePontosTuristicos1;

     //Declaração das Variaveis da Carta 2
    char Estado2[5], CodigodeCarta2[4], Cidade2[20];
    unsigned long int Populacao2;
    double area2, PIB2, DensidadePopulacional2, PIBpercapita2, SuperPoder2;
    int NumerosdePontosTuristicos2;

    int opcao;

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

    printf("Digite o PIB da Primeira Carta:\n");
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

    printf("Digite o PIB da Segunda Carta:\n");
    scanf("%lf", &PIB2);

    printf("Digite o Número de Pontos Turísticos da Segunda Carta:\n");
    scanf("%d", &NumerosdePontosTuristicos2);

    // Cálculos da Densidade Populacional, PIB e Super Poder
    DensidadePopulacional1 = Populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1000000000) / Populacao1;
    SuperPoder1 = Populacao1 + area1 + PIB1 + NumerosdePontosTuristicos1 + PIBpercapita1 + (1.0 / DensidadePopulacional1);

    DensidadePopulacional2 = Populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / Populacao2;
    SuperPoder2 = Populacao2 + area2 + PIB2 + NumerosdePontosTuristicos2 + PIBpercapita2 + (1.0 / DensidadePopulacional2);

    // Menu de escolha única
    printf("\n--- Escolha um atributo para comparar ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Comparação dos atributos das cartas com menu switch
    switch (opcao) {
        case 1:
            if (Populacao1 > Populacao2)
                printf("%s venceu em população.\n", Cidade1);
            else if (Populacao2 > Populacao1)
                printf("%s venceu em população.\n", Cidade2);
            else
                printf("Empate em população.\n");
            break;

        case 2:
            if (area1 > area2)
                printf("%s venceu em área.\n", Cidade1);
            else if (area2 > area1)
                printf("%s venceu em área.\n", Cidade2);
            else
                printf("Empate em área.\n");
            break;

        case 3:
            if (PIB1 > PIB2)
                printf("%s venceu em PIB.\n", Cidade1);
            else if (PIB2 > PIB1)
                printf("%s venceu em PIB.\n", Cidade2);
            else
                printf("Empate em PIB.\n");
            break;

        case 4:
            if (NumerosdePontosTuristicos1 > NumerosdePontosTuristicos2)
                printf("%s venceu em pontos turísticos.\n", Cidade1);
            else if (NumerosdePontosTuristicos2 > NumerosdePontosTuristicos1)
                printf("%s venceu em pontos turísticos.\n", Cidade2);
            else
                printf("Empate em pontos turísticos.\n");
            break;

        case 5:
            if (DensidadePopulacional1 < DensidadePopulacional2)
                printf("%s venceu em densidade populacional (menor é melhor).\n", Cidade1);
            else if (DensidadePopulacional2 < DensidadePopulacional1)
                printf("%s venceu em densidade populacional (menor é melhor).\n", Cidade2);
            else
                printf("Empate em densidade populacional.\n");
            break;

        case 6:
            if (PIBpercapita1 > PIBpercapita2)
                printf("%s venceu em PIB per capita.\n", Cidade1);
            else if (PIBpercapita2 > PIBpercapita1)
                printf("%s venceu em PIB per capita.\n", Cidade2);
            else
                printf("Empate em PIB per capita.\n");
            break;

        case 7:
            if (SuperPoder1 > SuperPoder2)
                printf("%s venceu no Super Poder.\n", Cidade1);
            else if (SuperPoder2 > SuperPoder1)
                printf("%s venceu no Super Poder.\n", Cidade2);
            else
                printf("Empate no Super Poder.\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0; //Retorna a 0 para indicar que o programa foi executado com sucesso
}
