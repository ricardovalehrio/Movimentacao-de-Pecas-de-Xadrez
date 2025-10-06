#include <stdio.h>

//🥇 Nível Mestre

// Função recursiva para movimentação da torre (horizontal: direita)
void moverTorreDireita(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Direita\n");
        moverTorreDireita(casasRestantes - 1);
    }
}

// Função recursiva para movimentação do bispo (diagonal: cima-direita)
void moverBispoDiagonal(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispoDiagonal(casasRestantes - 1);
    }
}

// Função recursiva para movimentação da rainha (vertical: cima)
void moverRainhaCima(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Cima\n");
        moverRainhaCima(casasRestantes - 1);
    }
}

// Bispo com loops aninhados: externo vertical, interno horizontal
void moverBispoLoops(int verticais, int horizontais) {
    for (int v = 0; v < verticais; v++) {
        for (int h = 0; h < horizontais; h++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Cavalo com loops complexos, usando continue/break e múltiplas variáveis
void moverCavaloL() {
    int passosVerticais = 2;
    int passosHorizontais = 1;

    for (int v = 0, realizadoV = 0; v < 3; v++) {
        // Apenas permitir dois passos verticais
        if (realizadoV == passosVerticais) break;
        printf("Cima\n");
        realizadoV++;
        // Se já fez os passos verticais, salta para o fim do laço para o passo horizontal
        if (realizadoV == passosVerticais) {
            for (int h = 0; h < passosHorizontais; h++) {
                printf("Direita\n");
            }
            break;
        }
    }
}

int main() {
    // Torre (recursiva)
    printf("Torre movendo para a direita (recursividade):\n");
    moverTorreDireita(5);
    printf("\n");

    // Bispo (recursiva)
    printf("Bispo movendo na diagonal (recursividade):\n");
    moverBispoDiagonal(5);
    printf("\n");

    // Rainha (recursiva)
    printf("Rainha movendo para cima (recursividade):\n");
    moverRainhaCima(8);
    printf("\n");

    // Bispo (loops aninhados)
    printf("Bispo movendo na diagonal (loops aninhados):\n");
    moverBispoLoops(2, 3); // Exemplo: 2 verticais x 3 horizontais
    printf("\n");

    // Cavalo (loops complexos)
    printf("Cavalo movendo em L (loops complexos):\n");
    moverCavaloL();
    printf("\n");

    return 0;
}

