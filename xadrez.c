#include <stdio.h>

// Constantes para quantidade de movimentos
#define moviBispo 5
#define moviTorre 5
#define moviRainha 8
#define cavaloBaixo 2
#define cavaloEsquerda 1

// Função recursiva para o Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;
    printf("Cima\n");
    int h;
    for (h = 0; h < horizontal; h++) {
        printf("Direita\n");
    }
    moverBispo(vertical - 1, horizontal);
}

// Função recursiva para a Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para a Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

int main() {
    int i;

    // Bispo: 5 casas na diagonal cima direita
    printf("Bispo:\n");
    moverBispo(5,1);
    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Torre:\n");
    moverTorre(moviTorre);
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Rainha:\n");
    moverRainha(moviRainha);
    printf("\n");

    //Moviementação do Cavalo: 2 casas para cima e 1 para esquerda  
    printf("Cavalo:\n");
    int movimentosCavalo = 1;
    int l, m, n;
    for (l = 0; l < movimentosCavalo; l++) {
        for (m = 0; m < 3; m++) {
            if (m < 2) {
                printf("Cima\n");
                continue;
            }
            printf("Direita\n");
            break;
        }
    }
    printf("\n");

    return 0;
}