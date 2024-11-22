#include<stdio.h>
int main(){
    int tomate;
    float kgtomate, precio;
    printf("introduce el tipo de tomate\n");
    printf("Tomate perita(0) - Tomate cherry (1)\n");
    scanf("%d", &tomate);
    if(tomate==0)
    {
        printf("Ahora introduce cuantos kilos de tomate perita tenes\n");
        scanf("%f",&kgtomate);
        precio= kgtomate*7000;
        printf("El precio de los tomates es %f",precio);
    }
    else
    {
        printf("Ahora introduce cuantos kilos de tomate perita tenes\n");
        scanf("%f",&kgtomate);
        precio= kgtomate*10000;
        printf("El precio de los tomates es %f",precio);
    }
}   