#include <stdio.h>

int main (){
    char ch;
    for (ch=getch();ch!='x';ch= getch())
    printf ("%c\n", ch+1);
}