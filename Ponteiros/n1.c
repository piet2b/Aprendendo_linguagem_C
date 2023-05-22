#include <stdio.h>

/*Escreva um programa em C que declare uma variável inteira e 
um ponteiro para essa variável. Em seguida, peça ao usuário 
para digitar um número inteiro. Atribua o valor digitado à 
variável utilizando o ponteiro e, em seguida, exiba o valor 
armazenado tanto na variável quanto no ponteiro.*/

int main(){
    int num;
    int *ponteiro;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    ponteiro = &num;

    printf("\nValor armazenado na variável: %d\n", num);
    printf("Valor armazenado no ponteiro: %d\n", *ponteiro);

    return 0;
}