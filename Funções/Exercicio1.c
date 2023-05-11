#include <stdio.h>

/*Escreva uma função chamada "soma" que receba dois números inteiros 
como parâmetros e retorne a soma desses dois números. Em seguida,
no programa principal, peça ao usuário para digitar dois números, 
chame a função "soma" passando esses números como argumentos e 
exiba o resultado.*/

int soma (int a,int b){
    int resultado = a + b;
    return resultado;
}

int main(){
    int n1,n2;
    printf("Escreva dois números inteiros: ");
    scanf("%d %d", &n1, &n2);

    int resultado = soma(n1, n2);
    printf("A soma dos números é: %d\n", resultado);
}