#include <stdio.h>

/*Imprima todos os números de 1 a 0*/

void imprimir (int x){
    if (x == 0){
        printf("%d", x);
        }

    else{
        printf("%d ", x);
        imprimir (x-1);
    }
    
}

int main () {
    int n;

    printf("Digite um numero maior que zero:");
    scanf("%d", &n);

    imprimir (n);

    return 0;
}