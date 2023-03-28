#include <stdio.h>

int main() {
    int soma = 0;
    int numero;
    while (1) { // Loop infinito
        printf("Digite um número: ");
        scanf("%d", &numero);
        soma += numero;
        if (soma >= 10) {
            break; // Sai do loop se a soma for maior ou igual a 10
        }
    }
    printf("A soma dos números digitados é %d.\n", soma);
    return 0;
}
