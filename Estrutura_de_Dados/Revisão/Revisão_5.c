#include <stdio.h>

/*implemente um programa em C com funçao recursiva que receba um numero inteiro 
positivo e retorne a soma de todos os numeros inteiros de 1  a n*/

int calcularSomaRecursiva(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + calcularSomaRecursiva(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser positivo.\n");
    } else {
        int resultado = calcularSomaRecursiva(numero);
        printf("A soma dos números de 1 a %d é: %d\n", numero, resultado);
    }

    return 0;
}
