#include <stdio.h>

#define TAMANHO_TABULEIRO 8

// Função recursiva para mover a Torre (horizontal e verticalmente)
void moverTorre(int x, int y, int passos) {
    if (passos == 0) return;
    printf("Movendo para cima: (%d, %d)\n", x, y - passos);
    moverTorre(x, y - 1, passos - 1);
    printf("Movendo para direita: (%d, %d)\n", x + passos, y);
    moverTorre(x + 1, y, passos - 1);
}

// Função recursiva para mover a Rainha (combina Torre e Bispo)
void moverRainha(int x, int y, int passos) {
    if (passos == 0) return;
    printf("Movendo diagonal superior direita: (%d, %d)\n", x + passos, y - passos);
    moverRainha(x + 1, y - 1, passos - 1);
    printf("Movendo horizontal para a direita: (%d, %d)\n", x + passos, y);
    moverRainha(x + 1, y, passos - 1);
}

// Função recursiva e loops aninhados para movimentação do Bispo
void moverBispo(int x, int y, int passos) {
    if (passos == 0) return;
    for (int i = 1; i <= passos; i++) {
        for (int j = 1; j <= passos; j++) {
            printf("Movendo diagonal superior direita: (%d, %d)\n", x + i, y - j);
        }
    }
    moverBispo(x + 1, y - 1, passos - 1);
}

// Movimentação do Cavalo usando loops aninhados
void moverCavalo(int x, int y) {
    int movimentos[8][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1},
                             {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
    
    for (int i = 0; i < 8; i++) {
        int novo_x = x + movimentos[i][0];
        int novo_y = y + movimentos[i][1];
        if (novo_x > 0 && novo_x <= TAMANHO_TABULEIRO && novo_y > 0 && novo_y <= TAMANHO_TABULEIRO) {
            printf("Movimento do cavalo: (%d, %d) -> (%d, %d)\n", x, y, novo_x, novo_y);
        }
    }
}

int main() {
    printf("Movimentacao da Torre:\n");
    moverTorre(4, 4, 3);
    printf("\nMovimentacao da Rainha:\n");
    moverRainha(4, 4, 3);
    printf("\nMovimentacao do Bispo:\n");
    moverBispo(4, 4, 3);
    printf("\nMovimentacao do Cavalo:\n");
    moverCavalo(4, 4);
    
    return 0;
}