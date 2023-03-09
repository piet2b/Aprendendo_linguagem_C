# include <stdio.h>

//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. 
//A formula de conversao e: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

int main (){
    int C;
    printf ("Celsius\n");
    scanf ("%d",&C);
    
    float K = C + 273.15;
    printf ("Kelvin; %.2f\n", K);
    




}