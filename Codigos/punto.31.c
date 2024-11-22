#include<stdio.h>
int main (){
    int num1,num2;
    printf("Ingrese un numero\n");
    scanf("%d",&num1);
    printf("Ahora ingrese el otro numero\n");
    scanf("%d",&num2);
    if (num1==num2)
    {
        printf("Los numeros son iguales");
    }
    else
    {
        printf("Los numeros son distintos");
    }
    
}