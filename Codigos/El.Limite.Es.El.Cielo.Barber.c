#include <stdio.h>
#include <string.h>

#define MAX_TURNOS 15
#define MAX_CHAR 20

typedef struct 
{
    char Nombre[MAX_CHAR];
    char Apellido[MAX_CHAR];
    int NumCel;
    int TipoCorte;
    int Ocupado;
    int NumTurno;
    int Hora;
    int Minutos;
}cliente_t;

void ListaTurnos(cliente_t clientes[MAX_TURNOS]);

void ElegirTurno(cliente_t clientes[MAX_TURNOS]);

int main(){
    cliente_t clientes[MAX_TURNOS]= {0};
    int opcion;
    int Salir=0;
    int primer_turno_hora=10;
    int primer_turno_minuto=0;
    for (int i = 0; i < MAX_TURNOS; i++) {
    clientes[i].NumTurno = i + 1;
    clientes[i].Ocupado=0;
    clientes[i].Hora=primer_turno_hora;
    clientes[i].Minutos=primer_turno_minuto;
    primer_turno_minuto=primer_turno_minuto+30;
    if (primer_turno_minuto>=60)
    {
        primer_turno_minuto=primer_turno_minuto-60;
        primer_turno_hora++;
    } 
    }
    do
    {
        printf("\n-----MENU-----\n");
        printf("(1) - Lista de turnos\n");
        printf("(2) - Elegir turno\n");
        printf("(3) - Salir\n");
        scanf("%d",&opcion);
        if (opcion==1)
        {
            ListaTurnos(clientes);
        }
        else if(opcion==2)
        {
            ElegirTurno(clientes);
        }
        else if(opcion==3)
        {
            Salir=1;
        }
        else
        {
            printf("Esta opcion no es valida.");
        }
    } while (Salir==0);   
}


void ListaTurnos(cliente_t clientes[MAX_TURNOS]){
    int Aux;
    printf("Turnos:\n");
    for (int i = 0; i < MAX_TURNOS; i++)
    {
        if (clientes[i].Ocupado==0)
        {
            printf("Turno %d de las %d:%02d disponible.\n",clientes[i].NumTurno,clientes[i].Hora,clientes[i].Minutos);
        }
        else
        {
            printf("Turno %d de las %d:%02d ocupado.\n",clientes[i].NumTurno,clientes[i].Hora,clientes[i].Minutos);
        }
        
    }
}

void ElegirTurno(cliente_t clientes[MAX_TURNOS]){
    int RepetirTurno;
    int TurnoElegido;
    do{
        printf("Estos son los turnos disponibles:\n");
        ListaTurnos(clientes);
        printf("Elija un turno del 1 al %d (0 para salir):",MAX_TURNOS);
        scanf("%d",&TurnoElegido);
        if (TurnoElegido==0)
        {
            return;
        }
        
        if (TurnoElegido<1||TurnoElegido>MAX_TURNOS||clientes[TurnoElegido-1].Ocupado==1)
        {
            printf("El turno que elejiste no esta disponible.\n");
            printf("(1) - Queres elegir otro turno? - (0) Para volver al MENU\n");
            scanf("%d",&RepetirTurno);
            if (RepetirTurno==0)
            {
                return;
            }
        }
        else
        {
            RepetirTurno=0;
        }
    }while(RepetirTurno==1);
    cliente_t*TurnoSeleccionado=&clientes[TurnoElegido-1];
    TurnoSeleccionado->Ocupado=1;
    
    printf("Escriba su nombre:\n");
    scanf("%s",&TurnoSeleccionado->Nombre);
    printf("Escriba su apellido:\n");
    scanf("%s",&TurnoSeleccionado->Apellido);
    printf("Ingrese su numero de telefono:\n");
    scanf("%d",&TurnoSeleccionado->NumCel);
    printf("Por ultimo seleccione el tipo de servicio que nescesita.\nEscriba 1 para corte y 2 para corte y barba.\n");
    printf("Corte (1) ----- Corte y barba (2)\n");
    scanf("%d",&TurnoSeleccionado->TipoCorte);
    if (TurnoSeleccionado==1)
    {
        printf("El turno %d de corte fue asignado para %s %s\n",TurnoElegido,TurnoSeleccionado->Nombre,TurnoSeleccionado->Apellido);
    }
    else if(TurnoSeleccionado==2)
    {
        printf("El turno %d de corte y barba fue asignado para %s %s\n",TurnoElegido,TurnoSeleccionado->Nombre,TurnoSeleccionado->Apellido);
    }
}
