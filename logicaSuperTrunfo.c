#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
    // Definindo as variáveis onde os valores de cada atributo ficarão armazenados.
    char estado_1, estado_2;
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[20], nome_da_cidade_2[20];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pts_turisticos_1, pts_turisticos_2;
    float super_poder_1, super_poder_2;
    int opcao;

    // Título e descrição do jogo para o usuário.
    printf("#########################################\n");
    printf("# Bem-vindo(a) ao jogo de SUPER TRUNFO! #\n");
    printf("#      Cadastre duas cartas e veja      #\n");
    printf("#       Qual é a carta vencedora!       #\n");
    printf("#########################################\n");

    /*
    NOTA DO DESENVOLVEDOR!
    Use as informações abaixo para definir o atributo das cartas para não ter que pesquisar.
    Estado 1 - SaoPaulo
    população: 11.451.999
    área: 1.521
    PIB: 828.980.00
    Pts turísticos: 37

    Estado 2 - RioDeJaneiro
    população: 6.729.894
    área: 1.200
    PIB: 359.600.00
    Pts turísticos: 11
    */

    // Pedindo para o usuário as informações necessárias para cadastrar ambas as duas cartas.
    printf("\nDesenvolvendo a primeira carta!\n");
    printf("\nDigite uma letra que represente o primeiro estado (de 'A' a 'H'): ");
    scanf("%c", &estado_1);
    printf("\nDigite o código da carta (ex: 01, 02, ...): ");
    scanf("%s", codigo_da_carta_1);
    printf("\nDigite o nome da cidade (Sem espaços): ");
    scanf("%s", nome_da_cidade_1);
    printf("\nDigite a população da cidade: ");
    scanf("%d", &populacao_1);
    printf("\nDigite o tamanho da área em km²: ");
    scanf("%f", &area_1);
    printf("\nDigite o PIB: ");
    scanf("%f", &pib_1);
    printf("\nDigite a quantidade de pontos turísticos: ");
    scanf("%d", &pts_turisticos_1);

    printf("\n\nDesenvolvendo a segunda carta!\n");
    printf("\nDigite uma letra que represente o segundo estado (de 'A' a 'H'): ");
    scanf(" %c", &estado_2);
    printf("\nDigite o código da carta (ex: 01, 02, ...): ");
    scanf("%s", codigo_da_carta_2);
    printf("\nDigite o nome da cidade (Sem espaços): ");
    scanf("%s", nome_da_cidade_2);
    printf("\nDigite a população da cidade: ");
    scanf("%d", &populacao_2);
    printf("\nDigite o tamanho da área em km²: ");
    scanf("%f", &area_2);
    printf("\nDigite o PIB: ");
    scanf("%f", &pib_2);
    printf("\nDigite a quantidade de pontos turísticos: ");
    scanf("%d", &pts_turisticos_2);

    // Calculamos algumas informações das cartas
    float densidade_populacional_1 = (float) populacao_1 / area_1;
    float pib_per_capta_1 = (float) pib_1 / populacao_1;

    float densidade_populacional_2 = (float) populacao_2 / area_2;
    float pib_per_capta_2 = (float) pib_2 / populacao_2;

    // Calcular Super Poder das cartas
    super_poder_1 = (double) populacao_1 + area_1 + pib_1 + pib_per_capta_1 + (1.0 / densidade_populacional_1) + pts_turisticos_1;
    super_poder_2 = (double) populacao_2 + area_2 + pib_2 + pib_per_capta_2 + (1.0 / densidade_populacional_2) + pts_turisticos_2;

    // Criando o menu interativo:
    printf("\nCartas registradas! Agora escolha qual ATRIBUTO será COMPARADO para decidir a carta vencedora!");
    printf("\nDigite o número do atributo de acordo com a lista abaixo:");
    printf("\n0 - População");
    printf("\n1 - Área");
    printf("\n2 - PIB");
    printf("\n3 - Pontos turísticos");
    printf("\n4 - densidade populacional");
    printf("\n5 - PIB per capta");
    printf("\n6 - SUPER PODER\n");
    scanf("%d", &opcao);

    // Comparando as cartas de acordo com a escolha do usuário:
    switch (opcao) {
        case 0:
            if (populacao_1 > populacao_2) {
                printf("\nA população de %s venceu!", nome_da_cidade_1);
            } else if (populacao_1 < populacao_2) {
                printf("\nA população de %s venceu!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        case 1:
            if (area_1 > area_2) {
                printf("\nA área de %s venceu!", nome_da_cidade_1);
            } else if (area_1 < area_2) {
                printf("\nA área de %s venceu!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        case 2:
            if (pib_1 > pib_2) {
                printf("\nO PIB de %s venceu!", nome_da_cidade_1);
            } else if (pib_1 < pib_2) {
                printf("\nO PIB de %s venceu!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        case 3:
            if (pts_turisticos_1 > pts_turisticos_2) {
                printf("\nOs pontos turísticos de %s venceram!", nome_da_cidade_1);
            } else if (pts_turisticos_1 < pts_turisticos_2) {
                printf("\nOs pontos turísticos de %s venceram!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        case 4:
            if (densidade_populacional_1 < densidade_populacional_2) {
                printf("\nA densidade populacional de %s venceu!", nome_da_cidade_1);
            } else if (densidade_populacional_1 > densidade_populacional_2) {
                printf("\nA densidade populacional de %s venceu!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        case 5:
            if (pib_per_capta_1 > pib_per_capta_2) {
                printf("\nO PIB per capta de %s venceu!", nome_da_cidade_1);
            } else if (pib_per_capta_1 < pib_per_capta_2) {
                printf("\nO PIB per capta de %s venceu!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        case 6:
            if (super_poder_1 > super_poder_2) {
                printf("\nO SUPER PODER de %s era maior!", nome_da_cidade_1);
            } else if (super_poder_1 < super_poder_2) {
                printf("\nO SUPER PODER de %s era maior!", nome_da_cidade_2);
            } else {
                printf("Empate!");
            }
            break;

        default:
            printf("Vish, parece que você digitou uma opção inexistente, tente novamente!");
    }

    // Exibição dos Resultados:
    // Exibimos os dados de ambas as duas cartas, um por cada linha.
    // Exibimos também se uma carta ganha da outra.
    printf("\n\nPrimeira carta:");
    printf("\nCódigo: %c%s", estado_1, codigo_da_carta_1);
    printf("\nNome da cidade: %s", nome_da_cidade_1);
    printf("\nPopulação: %d", populacao_1);
    printf("\nÁrea em km²: %.2f", area_1);
    printf("\nPIB: %.2f", pib_1);
    printf("\nPontos turísticos: %d", pts_turisticos_1);
    printf("\nDensidade populacional: %.2f", densidade_populacional_1);
    printf("\nPib per capta: %.2f", pib_per_capta_1);
    printf("\nSuper Poder: %.2f", super_poder_1);

    printf("\n\nSegunda carta:");
    printf("\nCódigo: %c%s", estado_2, codigo_da_carta_2);
    printf("\nNome da cidade: %s", nome_da_cidade_2);
    printf("\nPopulação: %d", populacao_2);
    printf("\nÁrea em km²: %.2f", area_2);
    printf("\nPIB: %.2f", pib_2);
    printf("\nPontos turísticos: %d", pts_turisticos_2);
    printf("\nDensidade populacional: %.2f", densidade_populacional_2);
    printf("\nPib per capta: %.2f", pib_per_capta_2);
    printf("\nSuper Poder: %.2f\n", super_poder_2);

    printf("\nFim de jogo, volte mais vezes!\n");
    return 0;
}
