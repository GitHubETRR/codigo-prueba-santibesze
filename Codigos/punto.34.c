#include<stdio.h>
int main(){
    float A,B;
    int E,R;
    printf("Ingrese el valor A\n");
    scanf("%f",&A);
    printf("Ingrese el valor B\n");
    scanf("%f",&B);
    R=(A+B)/2;
    E=R*2;
    if (E==A+B)
    {
        printf("La suma de A y B es par");
    }
    else
    {
        printf("La suma de A y B es impar");
    }
    
}