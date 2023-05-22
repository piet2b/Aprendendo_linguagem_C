//Leia o salario de um funcion ´ ario. Calcule e imprima o valor do novo sal ´ ario, sabendo que ´
//ele recebeu um aumento de 25%.

# include <stdio.h>

int main (){
 double S, A;
 printf("Digite valor atual:\n");
 scanf("%lf",&S);


 A = S * 1.25;

 printf("esse e o novo valor: %lf\n", A);


}
