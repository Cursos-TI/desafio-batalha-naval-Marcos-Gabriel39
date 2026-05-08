#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};

    // posição inicial do navio
    int linha = 2;
    int coluna = 4;

    // cria navio horizontal de tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }

    // topo com letras (A–J)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%2c ", 'A' + j);
    }
    printf("\n");

    // linhas com números (1–10)
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}