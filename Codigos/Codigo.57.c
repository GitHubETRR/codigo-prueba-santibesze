#include <stdio.h>

int potencia (int x, int y){
    int res=1;
    for (int i = 0; i < y; i++)
    {
        res*=x;
    }
    return res;
}
int main(){
    int X,Y;
    printf("introduzca la base\n");
    scanf("%d",&X);
    printf("introduzca el exponente\n");
    scanf("%d",&Y);
    int res=potencia(X, Y);
    printf("%d elevado a %d es = %d\n",X,Y,res);
    }


