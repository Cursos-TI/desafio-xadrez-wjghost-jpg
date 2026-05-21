#include <stdio.h>

// ====================================================
// FUNÇÃO RECURSIVA DA TORRE
// ====================================================
// A Torre se move 5 casas para a direita.
// A função chama ela mesma até completar todos os movimentos.

void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// ====================================================
// FUNÇÃO RECURSIVA DA RAINHA
// ====================================================
// A Rainha se move 8 casas para a esquerda.

void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// ====================================================
// FUNÇÃO RECURSIVA DO BISPO
// ====================================================
// O Bispo se move na diagonal superior direita.
// Para representar a diagonal, usamos:
// Cima + Direita

void moverBispoRecursivo(int casas) {
    if(casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// ====================================================
// FUNÇÃO DO BISPO COM LOOPS ANINHADOS
// ====================================================
// O loop externo representa o movimento vertical.
// O loop interno representa o movimento horizontal.

void moverBispoLoopsAninhados(int casas) {
    int vertical, horizontal;

    for(vertical = 1; vertical <= casas; vertical++) {

        printf("Cima\n");

        for(horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
        }
    }
}

// ====================================================
// FUNÇÃO DO CAVALO COM LOOPS COMPLEXOS
// ====================================================
// O Cavalo se move em L:
// 2 casas para cima
// 1 casa para direita
//
// Foram usados loops aninhados, múltiplas variáveis,
// continue e break para controlar o fluxo.

void moverCavalo(int movimentosCima, int movimentosDireita) {
    int i, j;

    for(i = 1; i <= movimentosCima; i++) {

        printf("Cima\n");

        for(j = 1; j <= movimentosDireita; j++) {

            // Enquanto ainda não chegou no segundo movimento para cima,
            // o programa pula o movimento para direita.
            if(i < movimentosCima) {
                continue;
            }

            printf("Direita\n");

            // Após imprimir a direita uma vez,
            // encerramos o loop interno.
            break;
        }
    }
}

int main() {

    // ====================================================
    // DESAFIO DE XADREZ - MATECHECK
    // NÍVEL MESTRE
    // ====================================================

    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;
    const int CAVALO_CIMA = 2;
    const int CAVALO_DIREITA = 1;

    printf("===== DESAFIO DE XADREZ - NIVEL MESTRE =====\n\n");

    // ====================================================
    // MOVIMENTO DA TORRE
    // ====================================================

    printf("Movimento da Torre:\n");
    moverTorre(MOVIMENTO_TORRE);

    printf("\n");

    // ====================================================
    // MOVIMENTO DO BISPO COM RECURSIVIDADE
    // ====================================================

    printf("Movimento do Bispo com Recursividade:\n");
    moverBispoRecursivo(MOVIMENTO_BISPO);

    printf("\n");

    // ====================================================
    // MOVIMENTO DO BISPO COM LOOPS ANINHADOS
    // ====================================================

    printf("Movimento do Bispo com Loops Aninhados:\n");
    moverBispoLoopsAninhados(MOVIMENTO_BISPO);

    printf("\n");

    // ====================================================
    // MOVIMENTO DA RAINHA
    // ====================================================

    printf("Movimento da Rainha:\n");
    moverRainha(MOVIMENTO_RAINHA);

    printf("\n");

    // ====================================================
    // MOVIMENTO DO CAVALO
    // ====================================================

    printf("Movimento do Cavalo:\n");
    moverCavalo(CAVALO_CIMA, CAVALO_DIREITA);

    printf("\n===== FIM DO PROGRAMA =====\n");

    return 0;
}