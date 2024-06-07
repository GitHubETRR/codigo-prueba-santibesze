#include <stdio.h>
int main (){
    int op;
    float v1,v2;res,sum,mult,divi,prom,sumcuadrado;
    printf("ingrese el numero a operar\n");
    scanf("%d", &v1);
    printf("ingrese el otro numero a operar\n");
    scanf("%d", &v2);
    res= v1 - v2;
    sum= v1 + v2;
    mult= v1*v2;
    divi= v1/v2;
    prom= (v1+v2)/2;
    sumcuadrado= v1*v1+v2*v2;
    printf("Suma: %f\n", sum);
    printf("Resta: %f\n", res);
    printf("Multiplicacion: %f\n", mult);
    printf("Division: %f\n", divi);
    printf("Promedio: %f\n", prom);
    printf("suma al cuadrado: %f\n", sumcuadrado);

}