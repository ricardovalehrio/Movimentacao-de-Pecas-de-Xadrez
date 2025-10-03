#include <stdio.h>

// Tamanho padrão do tabuleiro (8x8)
#define N 8

// Módulo Novato: Movimentos básicos
void movimentos_torre(int linha, int coluna) {
    printf("\nMovimentos da Torre partindo de (%d, %d):\n", linha, coluna);
    for (int i = 0; i < N; i++) {
        if (i != linha) // mesma coluna
            printf("(%d, %d)\n", i, coluna);
    }
    for (int j = 0; j < N; j++) {
        if (j != coluna) // mesma linha
            printf("(%d, %d)\n", linha, j);
    }
}

void movimentos_bispo(int linha, int coluna) {
    printf("\nMovimentos do Bispo partindo de (%d, %d):\n", linha, coluna);
    for (int i = 1; i < N; i++) {
        // As 4 diagonais
        if (linha + i < N && coluna + i < N)
            printf("(%d, %d)\n", linha + i, coluna + i);
        if (linha + i < N && coluna - i >= 0)
            printf("(%d, %d)\n", linha + i, coluna - i);
        if (linha - i >= 0 && coluna + i < N)
            printf("(%d, %d)\n", linha - i, coluna + i);
        if (linha - i >= 0 && coluna - i >= 0)
            printf("(%d, %d)\n", linha - i, coluna - i);
    }
}

void movimentos_rainha(int linha, int coluna) {
    printf("\nMovimentos da Rainha partindo de (%d, %d):\n", linha, coluna);
    movimentos_torre(linha, coluna); // linha e coluna
    movimentos_bispo(linha, coluna); // diagonais
}

// Módulo Aventureiro: Movimentos do Cavalo (L)
void movimentos_cavalo(int linha, int coluna) {
    printf("\nMovimentos do Cavalo partindo de (%d, %d):\n", linha, coluna);
    int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < 8; i++) {
        int x = linha + dx[i];
        int y = coluna + dy[i];
        if (x >= 0 && x < N && y >= 0 && y < N)
            printf("(%d, %d)\n", x, y);
    }
}

// Módulo Mestre: Recursividade e múltiplas condições (Bispo avança enquanto possível)
void movimentos_bispo_recursivo(int linha, int coluna, int dx, int dy) {
    linha += dx;
    coluna += dy;
    if (linha < 0 || linha >= N || coluna < 0 || coluna >= N)
        return;
    printf("(%d, %d)\n", linha, coluna);
    movimentos_bispo_recursivo(linha, coluna, dx, dy);
}

// Módulo Mestre: Rainha avança em todas direções (linha, coluna, diagonais)
void movimentos_rainha_complexo(int linha, int coluna) {
    printf("\nMovimentos avançados da Rainha partindo de (%d, %d):\n", linha, coluna);
    int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};
    for (int i = 0; i < 8; i++)
        movimentos_bispo_recursivo(linha, coluna, dx[i], dy[i]);
}


// Menu interativo
int main() {
    int linha, coluna, opcao;
    do {
        printf("\nTabuleiro 8x8. Informe a posição (linha coluna) [0-7]: ");
        scanf("%d%d", &linha, &coluna);
        printf("\nEscolha a peça:\n1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n5 - Rainha Avançada\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: movimentos_torre(linha, coluna); break;
            case 2: movimentos_bispo(linha, coluna); break;
            case 3: movimentos_rainha(linha, coluna); break;
            case 4: movimentos_cavalo(linha, coluna); break;
            case 5: movimentos_rainha_complexo(linha, coluna); break;
            case 0: printf("\nSaindo...\n"); break;
            default: printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}
