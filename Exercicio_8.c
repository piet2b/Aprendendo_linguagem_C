#include <stdio.h>

// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. 
// A formula de conversao e: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.


int main (){
	int K;
	
	printf ("Kelvin: \n");
	scanf ("%d", &K);
	
	float C = K - 273.15;
	
	printf ("Celsius: %.2f \n", C);
	return 0;
	
}