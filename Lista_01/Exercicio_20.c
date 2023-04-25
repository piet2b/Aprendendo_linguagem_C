#include <stdio.h>

int main() {
    int num_sapatos, num_acima_39 = 0;
    
    do {
        printf("Digite o tamanho do sapato (ou um número menor ou igual a 0 para sair): ");
        scanf("%d", &num_sapatos);
    
        if (num_sapatos > 39) {
            num_acima_39++;
        }
        
    } while (num_sapatos > 0);
    
    printf("Foram digitados %d sapatos com tamanho acima de 39.\n", num_acima_39);
    
    return 0;
}