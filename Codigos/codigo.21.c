#include<stdio.h>
int main(){
    int fecha,dia,mes,anio;
    printf("Ingrese una fecha en formato DDMMAAAA\n");
    scanf("%d",&fecha);
    dia=fecha/1000000;
    mes=(fecha-dia*1000000)/10000;
    anio=fecha-dia*1000000-mes*10000;
    printf("Su fecha es dia %d mes %d año %d",dia,mes,anio);
}