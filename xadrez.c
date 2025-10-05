#include <stdio.h>

int main() {
    // NIVEL NOVATO 🏅
    // Variáveis para controle das estruturas de repetição
    int i;              // Contador para loop for (Torre)
    int contador_bispo = 0;   // Contador para loop while (Bispo)
    int contador_rainha = 0;  // Contador para loop do-while (Rainha)
    
    // Constantes que definem o número de casas a mover
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    
    // ============================================
    // TORRE: Movimento para a direita (5 casas)
    // Utilizando estrutura de repetição FOR
    // ============================================
    printf("Torre movendo para a direita:\n");
    
    for (i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separar as saídas
    
    // ============================================
    // BISPO: Movimento diagonal (5 casas)
    // Cima e Direita
    // Utilizando estrutura de repetição WHILE
    // ============================================
    printf("Bispo movendo na diagonal (cima e direita):\n");
    
    while (contador_bispo < CASAS_BISPO) {
        printf("Cima\n");
        printf("Direita\n");
        contador_bispo++;
    }
    
    printf("\n"); // Linha em branco para separar as saídas
    
    // ============================================
    // RAINHA: Movimento para a esquerda (8 casas)
    // Utilizando estrutura de repetição DO-WHILE
    // ============================================
    printf("Rainha movendo para a esquerda:\n");
    
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < CASAS_RAINHA);
    
    printf("\n"); // Linha em branco para separar as saídas
    
    return 0;
}


