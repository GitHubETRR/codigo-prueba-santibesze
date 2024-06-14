#include<stdio.h>
int main(){
    int segundos,minutos,horas,segundos_usuario;
    printf("Introduce la cantidad de segundos\n");
    scanf("%d",&segundos_usuario);
    if (segundos_usuario<86400)
    {
        horas=segundos_usuario/3600;
        minutos=(segundos_usuario-horas*3600)/60;
        segundos=segundos_usuario-minutos*60-horas*3600;
        printf("La cantidad de segundos en horas minutos y segundos es:\n %dhoras, %dminutos y %dsegundos",horas,minutos,segundos);
    }
    else
    printf("No se aceptan estos valores.");
}