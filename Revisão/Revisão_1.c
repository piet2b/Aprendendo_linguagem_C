#include <stdio.h>

/*Identifique o menor valor dentre 10 valores obtidos por uma entrada de dados e
armazenados em um vetor. O resultado do programa deve mostrar o valor mínimo e a sua
posição no vetor.*/

int main() {
    int valor[10];
    int min_val, min_index;

    // Input 
    printf("coloque 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valor[i]);
    }

    // Inicializando
    min_val = valor[0];
    min_index = 0;

    // Achar o valor mìnimo e a posição
    for (int i = 1; i < 10; i++) {
        if (valor[i] < min_val) {
            min_val = valor[i];
            min_index = i+1;
        }
    }

    // Display
    printf("O VALOR MINIMO E: %d\n", min_val);
    printf("POSICAO: %d\n", min_index);

    return 0;
}
