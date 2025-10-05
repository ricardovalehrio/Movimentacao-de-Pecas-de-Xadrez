#include <stdio.h>
// 🏅 Nível Aventureiro
int main() {
    // TORRE: Movimento horizontal e vertical (5 casas), usando FOR
    printf("Torre movendo em linha reta:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
        printf("Esquerda\n");
        printf("Cima\n");
        printf("Baixo\n");
    }
    printf("\n");

    // BISPO: Movimento diagonal (5 casas), usando WHILE
    printf("Bispo movendo na diagonal:\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima\n");
        printf("Direita\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        contador_bispo++;
    }
    printf("\n");

    // RAINHA: Movimento todas as direções (8 casas), usando DO-WHILE
    printf("Rainha movendo em todas as direcoes:\n");
    int contador_rainha = 0;
    do {
        printf("Cima\n");
        printf("Baixo\n");
        printf("Direita\n");
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);
    printf("\n");

    // CAVALO: Movimento em 'L' (duas casas para cima e uma para direita), usando WHILE e FOR
    printf("Cavalo movendo em L (2 casas para cima e 1 para direita):\n");
    int movimentoCompleto = 1;
    while (movimentoCompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    printf("\n");
    
    return 0;
}