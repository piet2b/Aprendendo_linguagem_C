#include <stdio.h>

/*Receba por entrada dados um vetor de números reais com 8 elementos e inverta a ordem dos
elementos desse vetor.*/

int main(){

    float vetor[8];

    // Input
    printf("coloque 8 valores reais:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%f", &vetor[i]);
    }

    // Inverter a ordem dos elementos do vetor
    for (int i = 0; i < 4; i++) {
        float temp = vetor[i];
        vetor[i] = vetor[7 - i];
        vetor[7 - i] = temp;
    }

    // Display
    printf("Vetor invertido:\n");
    for (int i = 0; i < 8; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}