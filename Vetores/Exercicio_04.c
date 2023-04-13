#include <stdio.h>

/*Faça um programa que leia duas sequências de 10 valores inteiros em dois vetores distintos, e depois
verifique se os dois vetores são idênticos.
*/

int main() {
  int vetor1[10], vetor2[10], i, iguais = 1;

  // Leitura dos valores do primeiro vetor
  printf("Digite os valores do primeiro vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("Posição %d: ", i+1);
    scanf("%d", &vetor1[i]);
  }

  // Leitura dos valores do segundo vetor
  printf("\nDigite os valores do segundo vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("Posição %d: ", i+1);
    scanf("%d", &vetor2[i]);
  }

  // Verifica se os dois vetores são iguais
  for (i = 0; i < 10; i++) {
    if (vetor1[i] != vetor2[i]) {
      iguais = 0;
      break;
    }
  }

  if (iguais) {
    printf("Os dois vetores são idênticos.\n");
  } else {
    printf("Os dois vetores não são idênticos.\n");
  }

  return 0;
}
