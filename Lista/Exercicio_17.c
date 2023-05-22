#include <stdio.h>
int main(){
    int vetor[10],i;
    for (i=0;i<10;i++){
        printf("digite um vetor %d\n", i+1);
        scanf("%d",&vetor[i]);
    }
    printf("O vetor ao contrario e: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    
}