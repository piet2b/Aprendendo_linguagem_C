#include <stdio.h>

/*Escreva uma função que receba um ponteiro para um número inteiro e 
retorne 1 se o número for positivo e 0 caso contrário.*/

int verificarPositivo(int *num) {
    if (*num > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = verificarPositivo(&numero);

    if (resultado == 1) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo ou zero.\n");
    }

    return 0;
}