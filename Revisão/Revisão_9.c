#include <stdio.h>

int potenciaRecursiva(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * potenciaRecursiva(x, y - 1);
    }
}

int main() {
    int a,b;

    printf("Digite a base: ");
    scanf("%d", &b);

    printf("Digite o expoente: ");
    scanf("%d", &a);

    printf("O resultado eh: %d ",potenciaRecursiva(a, b));
    return 0;
}
