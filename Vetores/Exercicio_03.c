#include <stdio.h>

/*Faça um programa que leia 10 valores e os armazene em um vetor. Depois, imprima o vetor na ordem */

int main() {
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor na ordem que foi recebido:\n");
    i = 0;
    while (i < 10) {
        printf("%d ", vetor[i]);
        i++;
    }
    printf("Vetor na ordem inversa à que foi recebido:\n");
    i = 9;
    while (i >= 0) {
        printf("%d ", vetor[i]);
        i--;
    }
    printf("\n");

    return 0;
}