#include <stdio.h>

/*Escreva uma função em C chamada "trocarValores" que recebe
dois ponteiros para inteiros como parâmetros. Essa função 
deve trocar os valores das variáveis apontadas pelos ponteiros. 
Em seguida, escreva um programa principal que declare duas 
variáveis inteiras, atribua valores a elas e chame a função 
"trocarValores" passando os endereços das variáveis como argumentos. 
Por fim, exiba os novos valores das variáveis no programa principal.*/

int trocarValores(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    return 0;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Valores originais:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n\n", num2);

    trocarValores(&num1, &num2);

    printf("Valores trocados:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}