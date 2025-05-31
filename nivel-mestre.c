#include <stdio.h>

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Torre: Cima\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha: Esquerda\n");
    moverRainha(passos - 1);
}

void moverBispo(int passosVerticais, int passosHorizontais) {
    if (passosVerticais == 0) return;

    for (int j = 0; j < passosHorizontais; j++) {
        printf("Bispo: Cima e Direita\n");
    }

    moverBispo(passosVerticais - 1, passosHorizontais); // chamada recursiva
}

void moverCavalo() {
    const int movimentos = 3; // número de movimentos "L" do cavalo

    for (int i = 0; i < movimentos; i++) {
        for (int cima = 0, direita = 0; cima < 2 || direita < 1; cima++) {
            if (cima < 2) {
                printf("Cavalo: Cima\n");
                continue;
            }
            if (direita <= 1) {
                printf("Cavalo: Direita\n");
                direita++;
            }
        }

        printf("\n"); 
    }
}

int main() {
    const int casas = 5;
    const int casasBispoVerticais = 5;
    const int casasBispoHorizontais = 1;

    printf("\n---- Movimentacao de Pecas de Xadrez ----\n");

    printf("\nMovimento da Torre\n\n");
    moverTorre(casas);

    printf("\n----------------------------------\n");
    printf("\nMovimento do Bispo\n\n");
    moverBispo(casasBispoVerticais, casasBispoHorizontais);

    printf("\n----------------------------------\n");
    printf("\nMovimento da Rainha\n\n");
    moverRainha(casas);

    printf("\n----------------------------------\n");
    printf("\nMovimento do Cavalo\n\n");
    moverCavalo();

    return 0;
}
