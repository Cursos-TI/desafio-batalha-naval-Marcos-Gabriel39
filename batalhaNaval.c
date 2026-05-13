#include <stdio.h>

// TAMANHO DO TABULEIRO
#define LINHAS 10
#define COLUNAS 10

int main() {

    // CRIA TABULEIRO (0 = água)
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // NAVIO 1 - HORIZONTAL
    // posição inicial (linha 1, coluna 1)
    int linhaH = 1;
    int colunaH = 1;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // NAVIO 2 - VERTICAL
    // posição inicial (linha 5, coluna 5)
    int linhaV = 5;
    int colunaV = 5;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // NAVIO 3 - DIAGONAL PRINCIPAL (↘)
    // (linha e coluna aumentam)
    int linhaD1 = 4;
    int colunaD1 = 1;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // NAVIO 4 - DIAGONAL SECUNDÁRIA (↙)
    // linha aumenta e coluna diminui
    int linhaD2 = 0;
    int colunaD2 = 9;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    // IMPRIMIR CABEÇALHO (A-J)
    printf("   ");

    for (int c = 0; c < COLUNAS; c++) {
        printf("%3c", 'A' + c);
    }

    printf("\n");

    // IMPRIMIR TABULEIRO
    for (int l = 0; l < LINHAS; l++) {

        // número da linha
        printf("%2d ", l + 1);

        // conteúdo da linha
        for (int c = 0; c < COLUNAS; c++) {
            printf("%3d", tabuleiro[l][c]);
        }

        printf("\n");
    }

    return 0;
}