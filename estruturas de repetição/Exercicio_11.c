#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    while (1) {
        printf("Digite um operador (+, -, *, /) ou Q para sair: ");
        scanf(" %c", &operador);

        if (operador == 'Q' || operador == 'q') {
            break; // sai do loop se o usuário digitar Q
        }

        printf("Digite dois números: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operador) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = num1 / num2;
                break;
            default:
                printf("Operador inválido\n");
                continue; // continua o loop se o operador for inválido
        }

        printf("%.2lf %c %.2lf = %.2lf\n", num1, operador, num2, resultado);
    }

    printf("Encerrando a calculadora.\n");
    return 0;
}
