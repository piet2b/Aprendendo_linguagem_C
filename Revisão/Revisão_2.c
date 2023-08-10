#include <stdio.h>

/*Calcule a soma dos N primeiros números inteiros positivos. O valor de N deve ser obtido
através da entrada de dados*/

int main() {
    int N;
    int soma = 0;

    // Solicitar o valor de N ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    // Calcular a soma dos primeiros N números inteiros positivos
    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    // Exibir o resultado da soma
    printf("A soma dos primeiros %d números inteiros positivos é: %d\n", N, soma);

    return 0;
}
