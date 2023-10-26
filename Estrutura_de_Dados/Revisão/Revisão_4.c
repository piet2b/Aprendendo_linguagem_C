#include <stdio.h>

/*Tenha uma entrada de elementos (vetor de 6 números inteiros) com uma função para realizar
a busca de um elemento K nesse vetor. Depois retorne a posição do elemento encontrado e
caso o elemento não seja encontrado retorne -1.*/

int main() {
    int vetor[6];
    int elemento, posicao = -1;

    // Input
    printf("Digite 6 números inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }

    // Perguntar
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    // Buscar
    for (int i = 0; i < 6; i++) {
        if (vetor[i] == elemento) {
            posicao = i;
            break; // Sair do loop
        }
    }

    // Display
    if (posicao != -1) {
        printf("O elemento %d foi encontrado na posição %d.\n", elemento, posicao);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
