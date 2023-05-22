#include <stdio.h>
int main() {
    int vetor[20], i;
    
    for (i = 0; i < 20; i++) {
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 10; i++) {
        vetor[i] = vetor[i] + vetor[19-i];
        vetor[19-i] = vetor[i] - vetor[19-i];
        vetor[i] = vetor[i] - vetor[19-i];
    }
    
    printf("\nVetor invertido: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}