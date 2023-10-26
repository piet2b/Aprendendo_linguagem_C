#include <stdio.h>

/*Calcule a soma dos N primeiros números inteiros positivos. O valor de N deve ser obtido
através da entrada de dados*/

int main() {
    int N;
    int soma = 0;

    // Input
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    // Soma
    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    // Display
    printf("A soma dos primeiros %d números inteiros positivos é: %d\n", N, soma);

    return 0;
}
