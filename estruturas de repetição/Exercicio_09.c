
#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    c = getch(); // lê um caractere do teclado sem a necessidade de pressionar Enter
    printf("\nO caractere digitado foi: %c\n", c);

    return 0;
}
