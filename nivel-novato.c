#include <stdio.h>

int main(){
    const int casas = 5; //número de casas que as peças se movimentarão


    printf("\n---- Movimentacao de Pecas de Xadrez ----\n\n");
    printf("\nMovimento da Torre\n\n");
    for (int i = 0; i < casas; i++)
    {
        printf("Torre: Cima\n");
    }

    int i = 0;
    printf("\n----------------------------------\n");
    printf("\nMovimento do Bispo\n\n");
    while(i < casas){
        printf("Bispo: Cima e Direita\n");
        i++;
    }

    i = 0;
    printf("\n----------------------------------\n");
    printf("\nMovimento da Rainha\n\n");
    do{
        printf("Rainha: Esquerda\n");
        i++;
    }while(i < casas);

    return 0;
}