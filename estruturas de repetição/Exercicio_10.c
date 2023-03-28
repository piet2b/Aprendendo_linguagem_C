#include <stdio.h>

int main() {
   
    int tamanho = 0;
       

    printf("Digite uma entrada: ");

    while (getchar () != '\n'){
        tamanho++;
    }
    
    printf("O número de caracteres digitados é: %d\n", tamanho);

    return 0;
}
