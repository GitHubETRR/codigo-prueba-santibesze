#include<stdio.h>

int main (){
    float cm;
    int pies,pulgadas;
    printf("ingrese el valor en cm\n");
    scanf("%f", &cm);
    pies=cm/30.48;
    pulgadas=cm/2.54 - pies*12;
    printf("La medida en pies y pulgadas es:\n");
    printf("%dft'%dinch", pies, pulgadas);
    return 0;
}
