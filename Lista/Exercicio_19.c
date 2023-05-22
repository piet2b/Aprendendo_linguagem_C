#include <stdio.h>
int main (){
    int i;
    float vetor[10],maior;
    for ( i = 0; i < 10; i++){
        printf("Digite 10 números: %d\n", i+1);
        scanf("%d", &vetor[i]);
    } maior = vetor[0];
        for (i=1;i<10;i++){
            if (vetor[i]>maior){
                maior=vetor[i];
            }
        }
    printf("O novo vetor é: ");
    for ( i = 0; i < 10; i++){
        vetor [i] = vetor[i] / maior;
        printf("%f", vetor[i]);
    }
}