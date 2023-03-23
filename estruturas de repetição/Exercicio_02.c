#include <stdio.h>

main (){
    int cont;
    for (cont=0;cont <=60; cont += 15){
        printf ("%d\n", cont);
    }
    printf ("%d\n", cont); // continua mais uma vez a conta
    return 0;
}