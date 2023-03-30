#include <stdio.h>

int main() {
    int a, b, c, i;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o ultimo valor: ");
    scanf("%d", &b);

    printf("Digite o c: ");
    scanf("%d", &c);

    if (a > b) {
        printf("O primeiro valor nao pode ser maior que o ultimo valor.\n");
   
    }

    printf("Contagem: ");
    i = a;
    while (i <= b) {
        printf("%d ", i);
        i += i;
    }

    printf("Acabou!\n");

    return 0;
}
