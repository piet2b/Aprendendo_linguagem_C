#include <stdio.h>

// Peça ao usuario para digitar tres valores inteiros e imprima a soma deles.

int main(){
	int A, B, C, SOMA;
	
	printf ("Escolha o primeiro valor: \n");
	scanf ("%d",&A);
	printf ("Escolha o segundo valor: \n");
	scanf ("%d",&B);
	printf ("Escolha o terceiro valor: \n");
	scanf ("%d",&C);
	
	SOMA = A + B + C;
	
	printf ("A soma total é: %d.\n", SOMA);
	return 0;
}