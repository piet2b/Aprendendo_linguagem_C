#include <stdio.h>

//Leia um numero real e imprima a quinta parte deste numero

int main (){
	int A, B;
	
	printf ("numero: \n");
	scanf ("%d", &A);
	
	B = A / 5;
	
	printf ("essa e a quinta parte: %d. \n", B);
	return 0;
	
}