#include <stdio.h>

/*Escreva um programa que leia 20 valores inteiros e os armazene em um vetor. Depois de ler os 20 valores, o
programa deve percorrer o vetor e mostrar na tela apenas os números pares que foram armazenados.*/

int main() {

    int vetor[20],i;

    for ( i = 0; i < 20; i++)
    { printf ("digite um valor %d\n", i+1);
        scanf("%d", &vetor[i]);
        
      if (vetor[i]%2==0){
        printf ("%d e par, posicao %d.\n",vetor[i],i+1);
      }  else {
        printf("%d e impar, posicao %d.\n",vetor[i],i+1);
      }
    }
    
}