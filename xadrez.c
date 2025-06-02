#include <stdio.h>

// Constantes para quantidade de movimentos
#define moviBispo 5
#define moviTorre 5
#define moviRainha 8

int main() {
    int i;

    //Bispo: 5 casas na diagonal cima direita
    printf("Bispo:\n");
    for (i = 0; i < moviBispo; i++) {
        printf("Cima, Direita\n");
    }
    printf("\n");

    //Movimentação da Torre: 5 casas para a direita
    printf("Torre:\n");
    i = 0;
    while (i < moviTorre) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    //Movimentação da Rainha: 8 casas para a esquerda
    printf("Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < moviRainha);
    printf("\n");

    return 0;
}