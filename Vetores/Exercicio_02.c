#include <stdio.h>

/*Faça um programa que leia 10 valores e os armazene em um vetor. Depois, o programa deve somar todos os
valores do vetor e apresentar o resultado.*/

int main() {

    int vetor[10], i, soma = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("A soma dos valores é: %d\n", soma);

}