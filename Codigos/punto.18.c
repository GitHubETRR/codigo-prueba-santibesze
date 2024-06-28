#include<stdio.h>
int main (){
    float r,a;
    const pi=3.14;   
    printf("Ingrese el valor del radio\n");
    scanf("%f",&r);
    a=r*r*pi;
    printf("el area de su circulo es: %f",a);
}