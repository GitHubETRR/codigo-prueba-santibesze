#include <stdio.h>
int main(){
    float n1,n2,resultado;
    char operacion;
    printf("Ingrese un numero\n");
    scanf(" %f",&n1);
    printf("Ingrese otro numer\n");
    scanf(" %f",&n2);
    printf("Elija la operacion que quiere realizar\n");
    printf("Suma escirba S - Resta escriba R - Multiplicacion escriba M - Division escriba D\n");
    scanf(" %c",&operacion);
    if (operacion=='S')
    {
        resultado=n1+n2;
        printf("El resultado de la suma es: %.3f",resultado);
    }
    if (operacion=='R')
    {
        resultado=n1-n2;
        printf("El resultado de la resta es: %.3f",resultado);
    }
    if (operacion=='M')
    {
        resultado=n1*n2;
        printf("El resultado de la multiplicacion es: %.3f",resultado);
    }
    if (operacion=='D' && n2!=0)
    {
        resultado=n1/n2;
        printf("El resultado de la multiplicacion es: %.3f",resultado);
    }
}