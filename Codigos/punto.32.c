#include<stdio.h>
int main(){
    int num1,num2;
    printf("Ingrese su numero\n");
    scanf("%d",&num1);
    num2=num1/2;
    if (num1-num2*2==0)
    {
        printf("Su numero es par");
    }
    else
    {
        printf("Su numero es impar");
    }
}