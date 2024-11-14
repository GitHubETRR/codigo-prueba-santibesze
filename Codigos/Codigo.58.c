#include <stdio.h>

void tablaDeMultiplicar(int num){
    for (int i = 0; i <= 10; i++)
    {
        int res=i*num;
        printf("%d*%d=%d "i,num,res);
    }
}
int main(){
        int num;
        printf("Introduzca un numero entero:\n");
        scanf("%d",&num)
        tablaDeMultiplicar(num);
    }