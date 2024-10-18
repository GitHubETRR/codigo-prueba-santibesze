#include<stdio.h>
int main(){
    float ang1,ang2,ang3;
    printf("Ingrese el valor de uno de los angulos\n");
    scanf("%f", &ang1);
    printf("Ingrese el valor del otro angulo\n");
    scanf("%f", &ang2);
    ang3= 180 - ang1 - ang2;
    printf("El valor del angulo restante es: %f",ang3);
    return 0;
}