#include <stdio.h>
#include <string.h>

#define Turnos_max 15

struct Cliente
{
    char Nombre[20];
    char Apellido[20];
    int NumCel;
    int TipoCorte;
    int Ocupado;
    int nTurno;
};

void Turnos(struct Cliente turnos[Turnos_max]){
    printf("Turnos:\n");
    for (int i = 0; i < Turnos_max; i++)
    {
        if (turnos[i].Ocupado==0)
        {
            printf("Turno %d disponible",turnos[i].nTurno);
        }
        else
        {
            printf("Turno %d ocupado",turnos[i].nTurno);
        }
        
    }
}
void ElegirTurno(struct Cliente Turnos[Turnos_max]){
    int TurnoElegido
    printf("Estos son los turnos disponibles:");
    Turnos(Turnos);
    printf("Elija un turno del 1 al %d",Turnos_max);
    scanf("%d",&TurnoElegido);
    if (TurnoElegido<1||TurnoElegido>Turnos_max||Turnos[TurnoElegido-1].Ocupado==1)
    {
        printf("El turno que elejiste no esta disponible");
        return;
    }
    Turnos[TurnoElegido - 1].nTurno = TurnoElegido
    Turnos[TurnoElegido-1].Ocupado=1;
    printf("Escriba su nombre:\n");
    scanf("%s",&Turnos[TurnoElegido-1].Nombre);
    printf("Escriba su apellido:\n");
    scanf("%s",&Turnos[TurnoElegido-1].Apellido);
    printf("Escriba su numero de telefono:\n");
    scanf("%d",&Turnos[TurnoElegido-1].NumCel);
    printf("Por ultimo seleccione el tipo de servicio que nescesita\n");
    printf("Corte (1) ----- Corte y barba (2)");
    scanf("%d",&Turnos[TurnoElegido-1].TipoCorte);
    printf("El turno %d fue asignado para %s %s",TurnoElegido,&Turnos[TurnoElegido-1].Nombre,&Turnos[TurnoElegido-1].Apellido);
}
