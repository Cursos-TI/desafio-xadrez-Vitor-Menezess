#include <stdio.h>

// Função que simula movimentos da Torre
// Cada chamada imprime "Direita" e chama recursivamente até Torre chegar a 0
void moverTorre(int Torre){
    if (Torre > 0) {
        printf("Direita \n");
        moverTorre(Torre - 1); // chamada recursiva
    }
}

// Função que simula movimentos do Bispo
// Usa loops para imprimir Cima e Direita, depois chama recursivamente
void moverBispo(int Bispo){
    if (Bispo > 0) {
        for (int i = 0; i < 1; i++) {
            printf("Cima \n");
            for (int j = 0; j < 1; j++){
                printf("Direita \n");
            }
        }
        printf("\n");
        moverBispo(Bispo - 1); // chamada recursiva
    }
}

// Função que simula movimentos da Rainha
// Imprime Esquerda e chama recursivamente até Rainha chegar a 0
void moverRainha(int Rainha){
    if (Rainha > 0) {
        printf("Esquerda\n");
        moverRainha(Rainha - 1);
    }
}

// Função que simula movimentos do Cavalo
// Usa loops para imprimir Cima e Direita, depois chama recursivamente
 void moverCavalo(int Cavalo){
    if (Cavalo > 0){
        for (int i = 0; i < 2; i++){
            printf("Cima\n");
        }

        for (int j = 0; j < 1; j++){
            printf("Direita\n");
        }

        printf("\n");
        moverCavalo(Cavalo - 1); // chamada recursiva
    }
}


            int main(){
                int MovimentoTorre = 5, MovimentoBispo = 6, MovimentoRainha = 8, MovimentoCavalo = 1;

                printf("Iniciando jogo de xadrez... \n"); // print de inicialização
                
                // print de movimentos da torre
                printf("O Torre terá %d movimentos, e esses são os movimentos da Torre: \n", MovimentoTorre);
                moverTorre(5); // chamada da função moverTorre com o valor de 5, para 5 movimento

                // print de movimentos do bispo
                printf("\n O bispo terá %d movimentos, e esses são os movimentos do bispo: \n", MovimentoBispo);
                moverBispo(6); // chamada da função moverBipo com o valor de 6, para 6 movimento

                // print de movimentos da Rainha
                printf("\n A Rainha terá %d movimentos, e esses são os movimentos da Rainha: \n", MovimentoRainha);
                moverRainha(8); // chamada da função moverrainha com o valor de 8, para 8 movimento

                // print de movimentos do Cavalo
                printf("\n O Cavalo terá %d movimento, e esses são os movimentos do Cavalo: \n", MovimentoCavalo);

                int cima = 3; // variavel de movimento
                int direita = 1;

                for(int i = 0; i < cima; i++){ // Loop para o movimento cima
                    
                    do{
                        if(i == 1) {continue;} // pula o segundo movimento só para ilustrar o continue

                        printf("Cima\n");
                        break; // encerra o for logo após imprimir cima 2x
                    } while (0); // while falso para que mesmo sem break esse loop termine.
                }
                for (int J = 0; J < direita; J++){ // Loop para o movimento à direita
                    do {
                        printf("Direita\n");
                        break; // encerra o for logo após imprimir
                    } while(0); 
                }
            


return 0;
}