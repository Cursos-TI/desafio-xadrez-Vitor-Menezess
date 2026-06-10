#include <stdio.h>

// Função recursiva com loops internos para simular o movimento do Bispo
void moverBispo(int Bispo) {
    // Condição de paragem da recursividade
    if (Bispo == 0) {
        return;
    }

    // Loop para a direção vertical Cima
    // Executa apenas 1 vez para imprimir a palavra
    for (int i = 0; i < 1; i++) {
        printf("Cima, ");
    }

    // Loop para a direção horizontal Direita
    // Executa apenas 1 vez para completar a diagonal
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }

    // Chamada recursiva para a próxima casa
    moverBispo(Bispo - 1);
}

                int main() {
                    int totalCasas = 5; // Defina quantas casas o Bispo vai andar

                    printf("Simulando o movimento do Bispo (%d casas):\n\n", totalCasas);
                    
                    // Inicia a recursividade
                    moverBispo(totalCasas);

    return 0;
}
