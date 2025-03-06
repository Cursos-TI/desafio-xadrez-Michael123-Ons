#include <stdio.h>

int main(){

    //definição das variáveis para o número de casas de cada peça
    int mov_bispo = 5; //bispo move 5 casas na diagonal superior direita
    int mov_torre = 5; //torre move 5 casas para a direita
    int mov_rainha = 8; //rainha move 8 casas para a esquerda
    int i; //declaração da variável antes do For

    //Movimentação do bispo
    printf("\nMovimentação do Bispo:\n");
    for (int i = 1; i <= mov_bispo; i++) {
        printf("Direita, Cima (%d)\n", i);
    }


    //Movimentação da torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= mov_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    //Movimentação da rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 1; i <= mov_rainha; i++) {
        printf("Esquerda (%d)\n", i);
    }

    return 0;

}
