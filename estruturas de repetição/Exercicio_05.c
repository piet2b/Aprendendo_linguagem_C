#include <stdio.h>

int main (){
    int x,y;
    for (x=0,y=0;x+y<100;x= x+1, y=y+1)
    printf ("%d\n", x+y);
}