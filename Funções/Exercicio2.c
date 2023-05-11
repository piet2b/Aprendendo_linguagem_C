#include <stdio.h>

/*Escreva uma função chamada "fatorial" que receba um número inteiro como 
parâmetro e retorne o fatorial desse número. O fatorial de um número é o
produto de todos os números inteiros de 1 até o próprio número. No programa 
principal, peça ao usuário para digitar um número, chame a função "fatorial"
passando esse número como argumento e exiba o resultado.*/

int fatorial (int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    } 
    return resultado;
}

int main (){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int resultado = fatorial(n);
    printf("O fatorial de %d é: %d\n", n, resultado);
    return 0;

}