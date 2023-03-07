#include <stdio.h>

//Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
//A formula de conversao e: C = 5.0 * (F - 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.


int main (){
	int C, F;
	
	printf ("temperatura em F: \n");
	scanf ("%d", &F);
	
	C = 5.0 * (F - 32.0)/9.0;
	
	printf ("Celsius: %d. \n", C);
	return 0;
	
}