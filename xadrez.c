#include <stdio.h>

int main() {

    // ====================================================
    // DESAFIO DE XADREZ - MATECHECK
    // ====================================================

    // Constantes com a quantidade de movimentos
    // de cada peça no tabuleiro
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;

    // Variável de controle dos loops
    int i;

    printf("===== DESAFIO DE XADREZ - MATECHECK =====\n\n");

    // ====================================================
    // MOVIMENTO DO BISPO
    // ====================================================
    // O Bispo se move na diagonal superior direita.
    // Como o sistema possui apenas:
    // Cima, Baixo, Esquerda e Direita,
    // utilizamos a combinação:
    // "Cima" + "Direita"

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

    // Reinicia a variável de controle
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

    // Reinicia a variável de controle
    i = 1;

    // Estrutura DO WHILE
    do {

        printf("Esquerda\n");

        i++;

    } while(i <= MOVIMENTO_RAINHA);

    printf("\n===== FIM DO PROGRAMA =====\n");

    return 0;
}