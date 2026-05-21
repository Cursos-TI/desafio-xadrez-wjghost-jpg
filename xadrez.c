#include <stdio.h>

int main() {

    // ====================================================
    // DESAFIO DE XADREZ - MATECHECK
    // NÍVEL NOVATO + NÍVEL AVENTUREIRO
    // ====================================================

    // Quantidade de movimentos das peças
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;

    // Variáveis de controle
    int i, j;

    printf("===== DESAFIO DE XADREZ - MATECHECK =====\n\n");

    // ====================================================
    // MOVIMENTO DO BISPO
    // ====================================================
    // O Bispo se move na diagonal superior direita.
    // Como o sistema possui apenas:
    // Cima, Baixo, Esquerda e Direita,
    // utilizamos:
    // Cima + Direita

    printf("Movimento do Bispo:\n");

    // Estrutura FOR
    for(i = 1; i <= MOVIMENTO_BISPO; i++) {

        printf("Cima\n");
        printf("Direita\n");

    }

    printf("\n");

    // ====================================================
    // MOVIMENTO DA TORRE
    // ====================================================
    // A Torre se move 5 casas para a direita

    printf("Movimento da Torre:\n");

    // Reinicia variável de controle
    i = 1;

    // Estrutura WHILE
    while(i <= MOVIMENTO_TORRE) {

        printf("Direita\n");

        i++;
    }

    printf("\n");

    // ====================================================
    // MOVIMENTO DA RAINHA
    // ====================================================
    // A Rainha se move 8 casas para a esquerda

    printf("Movimento da Rainha:\n");

    // Reinicia variável de controle
    i = 1;

    // Estrutura DO WHILE
    do {

        printf("Esquerda\n");

        i++;

    } while(i <= MOVIMENTO_RAINHA);

    printf("\n");

    // ====================================================
    // MOVIMENTO DO CAVALO
    // ====================================================
    // O Cavalo se move em "L":
    // 2 casas para Baixo
    // 1 casa para Esquerda
    //
    // Obrigatório uso de loops aninhados

    printf("Movimento do Cavalo:\n");

    // LOOP EXTERNO -> FOR
    // Responsável pelas 2 casas para BAIXO

    for(i = 1; i <= 2; i++) {

        printf("Baixo\n");

        // LOOP INTERNO -> WHILE
        // Executa 1 movimento para ESQUERDA
        // apenas após finalizar os 2 movimentos para baixo

        if(i == 2) {

            j = 1;

            while(j <= 1) {

                printf("Esquerda\n");

                j++;
            }
        }
    }

    printf("\n===== FIM DO PROGRAMA =====\n");

    return 0;
}