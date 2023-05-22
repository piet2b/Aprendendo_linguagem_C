#include <stdio.h>

// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
// A formula de conversao e: ´ F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

int main (){
	int C, F;
	
	printf ("temperatura em c: \n");
	scanf ("%d", &C);
	
	F = C*(9.0/5.0)+32.0;
	
	printf ("Fahrenheit: %d. \n", F);
	return 0;
	
}