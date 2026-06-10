#include <stdio.h>

            int main(){

                int Bispo = 0, rainha = 0;
                int MovimentoBispo = 1, MovimentoRainha = 1;


// movimento da torre: ela ira ter 5 movimentos para a direita
                printf("\n\n     ***Movimentos do Torre***\n\n");
                for (int I = 0, M = 1; I < 5; I++, M++)
                {
                printf("%d.º movimeto da Torre para a Direita.\n", M); // imprime a direção e quantos movimentos foram feitos
                }

 // movimento da Bispo: ela ira ter 5 movimentos para a Diagonal. porem a diagonal sera a junção de cima e direita igualando uma diagonal
                printf("\n\n     ***Movimentos do Bispo***\n\n");
                while(Bispo < 5)
                {
                    printf("%d.º movimento do bispo indo de cima a direita igualando a uma diagonal.\n", MovimentoBispo);
                    MovimentoBispo++;
                    Bispo++;
                }

// movimento da Rainha: ela ira ter 8 movimentos para a esquerda
                printf("\n\n     ***Movimentos da Rainha***\n\n");

                do
                {
                   printf("%d.ª movimento da Rainha para a esquerda.\n", MovimentoRainha);
                   MovimentoRainha++;
                   rainha++;
                } while (rainha < 8);

// movimento do cavalo: ele  faz movimento em L 
                printf("\n\n     ***Movimentos do Cavalo***\n\n");
                    int movimentofinal = 1;

                while (movimentofinal --)
                {
                    for (int a = 0; a < 2; a++)
                    {
                    printf("Baixo\n");
                    }
                    printf("Esquerda\n");
                }

return 0;             
}
