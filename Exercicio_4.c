#include <stdio.h>

//Leia um numero real e imprima o resultado do quadrado desse numero.

int main(){
	int A, QUA;
	
	printf ("Declare um numero: \n");
	scanf ("%d", &A);
	
	QUA = A * A;
	
	printf ("O resultado e: %d. \n", QUA);
	return 0;
}