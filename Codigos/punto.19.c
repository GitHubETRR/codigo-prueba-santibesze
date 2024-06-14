#include<stdio.h>
#include<math.h>
int main(){
    float cA,cB,h;
    printf("Ingrese el valor del cateto A\n");
    scanf("%f",&cA);
    printf("Ingrese el valor de el cateto B\n");
    scanf("%f",&cB);
    h=sqrt(pow(cB,2)+pow(cA,2));
    printf("El valor de la hipotenusa= %.3f",h);
}