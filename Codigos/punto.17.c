#include<stdio.h>
int main(){
    int hora,hora1,hora2,minutos,minutos1,minutos2,segundos,segundos1,segundos2;
    printf("Ingrese la hora de su primer timepo\n");
    scanf("%d",&hora1);
    printf("Ahora los minutos\n");
    scanf("%d",&minutos1);
    printf("Ahora los segundos\n");
    scanf("%d",&segundos1);
    printf("Ingrese la hora de su segundo timepo\n");
    scanf("%d",&hora2);
    printf("Ahora los minutos\n");
    scanf("%d",&minutos2);
    printf("Ahora los segundos\n");
    scanf("%d",&segundos2);
    segundos=segundos1+segundos2;
    minutos=minutos1+minutos2;
    hora=hora1+hora2;
    while (segundos>=60)
    {
        segundos=segundos-60;
        minutos=minutos+1;
    }
    while (minutos>=60)
    {
        minutos=minutos-60;
        hora=hora+1;
    }
    printf("La suma de los tiempos es\n");
    printf("%d horas, %d minutos y %d segundos",hora,minutos,segundos);
}