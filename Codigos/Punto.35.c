#include<stdio.h>
int main(){
    int A,B,C,D,num;
    printf("Ingrese un numero\n");
    scanf("%d",&num);
    A=num/1000;
    B=(num-A*1000)/100;
    C=(num-A*1000-B*100)/10;
    D=num-A*1000-B*100-C*10;
    if ((A==D)&&(B==C))
    {
        printf("El numero es capicua");
    }
    else
    {
        printf("El numero no es capicua");
    }
}

