#include <stdio.h>

int main (){
    int x;
    printf("Digite um valor:");
    scanf("%d",&x);

    if (x <= 0) {
        printf("O numero deve ser inteiro e positivo!\n");
    }
    printf("Contagem: ");
    int i=0;
    while (i<=x){
        printf("%d ",i);
        i++;
    }
}