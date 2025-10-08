#include <stdio.h>

int main() {

    int navio_vert[3];
    int navio_hor[3];
    int navio_diag[3];
    int navio_diag2[3];

    int tabuleiro[10][10] = {0};

    navio_hor[0] = 3;
    navio_hor[1] = 2;
    navio_hor[2] = 4;

    navio_vert[0] = 5;
    navio_vert[1] = 6;
    navio_vert[2] = 7;

    navio_diag[0] = 0;
    navio_diag[1] = 0;
    navio_diag[2] = 2;

    navio_diag2[0] = 6;
    navio_diag2[1] = 8;
    navio_diag2[2] = 10;

    for (int i = navio_hor[1]; i <= navio_hor[2]; i++) {
        if (tabuleiro[navio_hor[0]][i] == 0) {
            tabuleiro[navio_hor[0]][i] = 3;
        } else {
            printf("Já existe um navio nessa posição (%d, %d)\n", navio_hor[0], i);
        }
    }

    for (int i = navio_vert[0]; i <= navio_vert[2]; i++) {
        if (tabuleiro[i][navio_vert[1]] == 0) {
            tabuleiro[i][navio_vert[1]] = 3;
        } else {
            printf("Já existe um navio nessa posição (%d, %d)\n", i, navio_vert[1]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int linha = navio_diag[0] + i;
        int coluna = navio_diag[1] + i;
        if (linha < 10 && coluna < 10) {
            if (tabuleiro[linha][coluna] == 0) {
                tabuleiro[linha][coluna] = 3;
            } else {
                printf("Já existe um navio nessa posição (%d, %d)\n", linha, coluna);
            }
        } else {
            printf("Já existe um navio nessa posição (%d, %d)\n", linha, coluna);
        }
    }

    for (int i = 0; i < 3; i++) {
        int linha = navio_diag2[0] + i;
        int coluna = navio_diag2[1] - i;
        if (linha < 10 && coluna >= 0) {
            if (tabuleiro[linha][coluna] == 0) {
                tabuleiro[linha][coluna] = 3;
            } else {
                printf("Já existe um navio nessa posição (%d, %d)\n", linha, coluna);
            }
        } else {
            printf("Já existe um navio nessa posição (%d, %d)\n", linha, coluna);
        }
    }

    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}