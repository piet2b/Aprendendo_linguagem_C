
//Leia o valor do raio de um cırculo e calcule e imprima a area do cırculo correspondente.
//A area do cırculo e π ∗ raio2, considere π = 3.141592.
# include <stdio.h>

int main (){
    int A;
    printf("dig vlor raio\n");
    scanf("%d", &A);

    float B;
    double pi = 3.141592;

    B = pi * A * A;

    printf("o valor da area e\n %.2f", B);
    return 0;
}