#include <stdio.h>
int main(){
    int prom;
    printf("Ingrese el promedio del alumno\n");
    scanf(" %d",&prom);
    if (prom==10)
    {
        printf("El alumno obtuvo un sobresaliente");
    }
    if (prom==9 || prom==8)
    {
        printf("El alumno obtuvo un distinguido");
    }
    if (prom==7 || prom==6)
    {
        printf("El alumno obtuvo un bueno");
    }
    if (prom==5 || prom==4)
    {
        printf("El alumno obtuvo un aprobado");
    }
    if (prom<=3)
    {
        printf("El alumno obtuvo un desaprobado");
    }
}