#include <stdio.h>

int main() {

    int navio_vert[3];
    int navio_hor[3];

    int tabuleiro [10][10] = {0};

    navio_hor[0] = 3; 
    navio_hor[1] = 2;  
    navio_hor[2] = 4;

    navio_vert[0] = 5;
    navio_vert[1] = 6;
    navio_vert[2] = 7;

    for (int i = navio_hor[1]; i <= navio_hor[2]; i++) {
        tabuleiro[navio_hor[0]][i] = 3; 
    }

    for (int i = navio_vert[0]; i <= navio_vert[2]; i++) {
        tabuleiro[i][navio_vert[1]] = 3;
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