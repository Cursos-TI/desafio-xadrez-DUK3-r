#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Tabuleiro 5x5
    printf("\nTabuleiro 5x5:\n");
    for (int linha = 1; linha <= 5; linha++) {
        for (int coluna = 1; coluna <= 5; coluna++) {
            printf("(%d,%d) ", linha, coluna);
        }
        printf("\n");
    }

    // Movimento do Cavalo (2 casas para baixo, 1 para a esquerda)
    printf("\nMovimento do Cavalo:\n");
    int cavalo_x = 3, cavalo_y = 3; // Posição inicial do Cavalo
    printf("Posicao inicial: (%d,%d)\n", cavalo_x, cavalo_y);
    
    // Movendo duas casas para baixo
    for (int m = 0; m < 2; m++) {
        cavalo_x++;
        printf("(%d,%d) Baixo\n", cavalo_x, cavalo_y);
    }
    
    // Movendo uma casa para a esquerda
    cavalo_y--;
    printf("(%d,%d) Esquerda\n", cavalo_x, cavalo_y);
    
    return 0;
}