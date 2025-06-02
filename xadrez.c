#include <stdio.h>

// Constantes para quantidade de movimentos
#define moviBispo 5
#define moviTorre 5
#define moviRainha 8
#define cavaloBaixo 2
#define cavaloEsquerda 1

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

    //Moviementação do Cavalo: 2 casas para baixo e 1 para esquerda  
    printf("Cavalo:\n");
    int movimentosCavalo = 1;
    int j, k;
    for (j = 0; j < movimentosCavalo; j++) {
        k = 0;
        while (k < cavaloBaixo + cavaloEsquerda) {
            if (k < cavaloBaixo) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            k++;
        }
    }
    printf("\n");

    return 0;
}