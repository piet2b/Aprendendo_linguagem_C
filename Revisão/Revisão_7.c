#include <stdio.h>

void imprimir (int x){
    if (x == 0){
        printf("%d", x);
        }

    else{
        printf("%d ", x);
        imprimir (x-2);
    }
    
}

int main () {
    int n;

    printf("Digite um numero par: ");
    scanf("%d", &n);

    imprimir (n);

    return 0;
}
