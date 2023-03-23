#include <stdio.h>
//um de um algoritmo que imprime os números de 1 a 1000 que são múltiplos de 3 e 5 ao mesmo tempo.

int main() {
    int i;
    for (i = 1; i <= 1000; i+=2) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
