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

    int opcao1, opcao2;                         // As variáveis 'opcao' fazem parte do menu de jogo.
    int carta_1a, carta_1b, carta_2a, carta_2b;
    int resultado1, resultado2;

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

    // Criando o menu interativo e requisitando os atributos que serão usados para decidir a carta vencedora:
    printf("\nCartas registradas! Agora escolha o primeiro ATRIBUTO que será COMPARADO para decidir a carta vencedora!");
    printf("\nDigite o número do atributo de acordo com a lista abaixo:");
    printf("\n0 - População");
    printf("\n1 - Área");
    printf("\n2 - PIB");
    printf("\n3 - Pontos turísticos");
    printf("\n4 - densidade populacional");
    printf("\n5 - PIB per capta");
    printf("\n6 - SUPER PODER\n");
    scanf("%d", &opcao1);

    // Comparando as cartas de acordo com a escolha do usuário:
    switch (opcao1) {
        case 0:
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;

        case 1:
            resultado1 = area_1 > area_2 ? 1 : 0;
            break;

        case 2:
            resultado1 = pib_1 > pib_2 ? 1 : 0;
            break;

        case 3:
            resultado1 = pts_turisticos_1 > pts_turisticos_2 ? 1 : 0;
            break;

        case 4:
            resultado1 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            break;

        case 5:
            resultado1 = pib_per_capta_1 > pib_per_capta_2 ? 1 : 0;
            break;

        case 6:
            resultado1 = super_poder_1 > super_poder_2 ? 1 : 0;
            break;

        default:
            printf("Vish, parece que você digitou uma opção inexistente, tente novamente!");
            return 0;
    }

    printf("\nAgora escolha o segundo ATRIBUTO que será COMPARADO para decidir a carta vencedora!");
    printf("\nDigite o número do atributo de acordo com a lista abaixo:");
    printf("\n0 - População");
    printf("\n1 - Área");
    printf("\n2 - PIB");
    printf("\n3 - Pontos turísticos");
    printf("\n4 - densidade populacional");
    printf("\n5 - PIB per capta");
    printf("\n6 - SUPER PODER\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo! Tente novamente...");
        return 0;

    } else {
        switch (opcao2) {
        case 0:
            resultado2 = populacao_1 > populacao_2 ? 1 : 0;
            break;

        case 1:
            resultado2 = area_1 > area_2 ? 1 : 0;
            break;

        case 2:
            resultado2 = pib_1 > pib_2 ? 1 : 0;
            break;

        case 3:
            resultado2 = pts_turisticos_1 > pts_turisticos_2 ? 1 : 0;
            break;

        case 4:
            resultado2 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
            break;

        case 5:
            resultado2 = pib_per_capta_1 > pib_per_capta_2 ? 1 : 0;
            break;

        case 6:
            resultado2 = super_poder_1 > super_poder_2 ? 1 : 0;
            break;

        default:
            printf("Vish, parece que você digitou uma opção inexistente, tente novamente!");
            return 0;
        }
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

    if (resultado1 && resultado2) {
        printf("\n*** %s VENCEU! ***\n", nome_da_cidade_1);

    } else if (resultado1 != resultado2) {
        printf("\n*** Houve um EMPATE! ***\n");

    } else {
        printf("\n*** %s VENCEU! ***", nome_da_cidade_2);
    }

    printf("\nFim de jogo, volte mais vezes!\n");
    return 0;
}
