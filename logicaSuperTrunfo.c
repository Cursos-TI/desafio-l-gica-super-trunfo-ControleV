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

    // Pedindo para o usuário as informações necessárias para cadastrar ambas as duas cartas.
    printf("Digite uma letra que represente o primeiro estado (de 'A' a 'H'): \n");
    scanf("%c", &estado_1);
    printf("Digite o código da carta (ex: 01, 02, ...): \n");
    scanf("%s", codigo_da_carta_1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade_1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_1);
    printf("Digite o tamanho da área em km²: \n");
    scanf("%f", &area_1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pts_turisticos_1);

    printf("\nDigite uma letra que represente o segundo estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado_2);
    printf("Digite o código da carta (ex: 01, 02, ...): \n");
    scanf("%s", codigo_da_carta_2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade_2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_2);
    printf("Digite o tamanho da área em km²: \n");
    scanf("%f", &area_2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pts_turisticos_2);

    // Calculamos algumas informações das cartas
    float densidade_populacional_1 = (float) populacao_1 / area_1;
    float pib_per_capta_1 = (float) pib_1 / populacao_1;

    float densidade_populacional_2 = (float) populacao_2 / area_2;
    float pib_per_capta_2 = (float) pib_2 / populacao_2;

    // Calcular Super Poder das cartas
    super_poder_1 = (double) populacao_1 + area_1 + pib_1 + pib_per_capta_1 + (1.0 / densidade_populacional_1) + pts_turisticos_1;
    super_poder_2 = (double) populacao_2 + area_2 + pib_2 + pib_per_capta_2 + (1.0 / densidade_populacional_2) + pts_turisticos_2;

    // Comparação de Cartas:

    if (populacao_1 > populacao_2) {
        printf("\nA população de %s venceu!", nome_da_cidade_1);
    } else {
        printf("\nA população de %s venceu!", nome_da_cidade_2);
    }

    if (area_1 > area_2) {
        printf("\nA área de %s venceu!", nome_da_cidade_1);
    } else {
        printf("\nA área de %s venceu!", nome_da_cidade_2);
    }

    if (pib_1 > pib_2) {
        printf("\nO PIB de %s venceu!", nome_da_cidade_1);
    } else {
        printf("\nO PIB de %s venceu!", nome_da_cidade_2);
    }

    if (pts_turisticos_1 > pts_turisticos_2) {
        printf("\nOs pontos turísticos de %s venceu!", nome_da_cidade_1);
    } else {
        printf("\nOs pontos turísticos de %s venceu!", nome_da_cidade_2);
    }

    if (densidade_populacional_1 > densidade_populacional_2) {
        printf("\nA densidade populacional de %s venceu!", nome_da_cidade_1);
    } else {
        printf("\nA densidade populacional de %s venceu!", nome_da_cidade_2);
    }

    if (pib_per_capta_1 > pib_per_capta_2) {
        printf("\nO PIB per capta de %s venceu!", nome_da_cidade_1);
    } else {
        printf("\nO PIB per capta de %s venceu!", nome_da_cidade_2);
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
    printf("\nSuper Poder: %.2f", super_poder_2);

    // Exibindo a carta vencedora pelo seu atributo Super Poder
    if (super_poder_1 > super_poder_2) {
        printf("\n\nComparando os super poderes, a cidade vencedora é: %s!\n", nome_da_cidade_1);
    } else {
        printf("\n\nComparando os super poderes, a cidade vencedora é: %s!\n", nome_da_cidade_2);
    }

    printf("\nFim de jogo!\n");
    return 0;
}
