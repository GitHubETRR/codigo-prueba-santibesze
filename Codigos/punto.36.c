#include<stdio.h>
int main()
{
    int viaje;
    float peso,Cviaje;
    printf("Buenas, elije el tipo de viaje\n");
    printf("Viaje largo(0) - Viaje corto(1)\n");
    scanf("%d",&viaje);
    printf("¿Cual es el peso de la mercaderia?\n");
    scanf("%f",&peso);
    if ((viaje<0)||(viaje>1))
    {
        printf("El numero que ingresaste para el viaje no es valido");
    }
    else
    {
        if (viaje==1)
        {
            if (peso>20)
            {
                Cviaje=1500+800*(peso-20);
            }
            else
            {
                Cviaje=1500;
            }
        }
        else
        {
            if (viaje==0)
            {
                if (peso>20)
                {
                    Cviaje=2000+800*(peso-20)/5;
                }
                else
                {
                    Cviaje=2000;
                }
            }
        }
        printf("el costo del viaje es %f",Cviaje);
    }
}
