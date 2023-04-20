#include <stdio.h>

/*Faça um programa que carregue um vetor com sete números inteiros e mostre:
a. Os números múltiplos de 2;
b. Os números múltiplos de 3;
c. Os números múltiplos de 2 e de 3.
Obs: Informar para o usuário caso não tenha números múltiplos em questão*/

int main (){
    int vetor[7], i;

    // Leitura dos valores
    printf ("Escreva 7 números: ");
      for (int i=0; i<7; i++){
        scanf("%d", &vetor[i]);
      }
    
    // Verificando múltiplos de 2
    int Mult2 = 0;
    printf("\nNúmeros múltiplos de 2: ");
    for(int i=0; i<7; i++){
        if(vetor[i] % 2 == 0){
            printf("%d (posição %d) -", vetor[i], i+1);
            Mult2 = 1;
        }
    
    }
    if(!Mult2){
        printf("\nNão há múltiplos de 2.");
    }

    // Verificando múltiplos de 3
    int Mult3 = 0;
    printf("\nNúmeros múltiplos de 3: -");
    for(int i=0; i<7; i++){
        if(vetor[i] % 3 == 0){
            printf("%d (posição %d) ", vetor[i], i+1);
            Mult3 = 1;
        }
    }
    if(!Mult3){
        printf("\nNão há múltiplos de 3.");
    }

    // Verificando múltiplos de 2 e de 3
    int Mult2e3 = 0;
    printf("\nNúmeros múltiplos de 2 e de 3: -");
    for(int i=0; i<7; i++){
        if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0){
            printf("%d (posição %d) ", vetor[i], i+1);
            Mult2e3 = 1;
        }
    }
    if(!Mult2e3){
        printf("\nNão há múltiplos de 2 e de 3.");
    }
}