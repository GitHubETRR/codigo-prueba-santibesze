#include <stdio.h>
int main(){
    char c1,c2,c3,c0;
    printf("Ingrese un caracter\n");
    scanf("%c",&c1);
    printf("Ingrese otro caracter\n");
    scanf("%c",&c2);
    printf("Ingrese el ultimo caracter\n");
    scanf("%c",&c3);
    if (c1>c2)
    {
        c0=c1;
        c1=c2;
        c2=c0;
    }
    if (c1>c3)
    {
        c1=c0;
        c1=c3;
        c3=c0;
    }
    if (c2>c3)
    {
        c0=c2;
        c2=c3;
        c3=c0;
    }
    printf("Los caracteres ordenados: %c %c %c",c1,c2,c3);
    
    
}