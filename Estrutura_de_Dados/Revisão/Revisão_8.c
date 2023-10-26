#include <stdio.h>

int somaParesRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaParesRecursiva(n - 2);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo par: ");
    scanf("%d", &n);

    if (n % 2 != 0 || n <= 0) {
        printf("O numero n eh valido.\n");
    } else {
        printf("A soma dos numeros pares ate %d eh: %d\n", n, somaParesRecursiva(n));
    }

    return 0;
}
