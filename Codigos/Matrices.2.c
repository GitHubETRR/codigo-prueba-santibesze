#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void val_aleatorios(int matriz[N][N]);
void buscar_val_max(int matriz[N][N], int fila, int columna, int val_max, int contador);

int main(){
    int matriz[N][N];
    int val_max = 0;
    int fila = 0;
    int columna = 0;
    int contador = 0;
    val_aleatorios(matriz);
    buscar_val_max(matriz, fila, columna, val_max, contador);
} 

void val_aleatorios(int matriz[N][N]){
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = rand() %15+1;
            printf("|%2d| ",matriz[i][j]);
        }
        printf("\n");
    }    
}

void buscar_val_max(int matriz[N][N], int fila, int columna, int val_max, int contador){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matriz[i][j]>val_max)
            {
                val_max = matriz[i][j];
                fila = i;
                columna = j;
                contador = 0;
            }
            if (matriz[i][j]==val_max)contador++;       
        }        
    }
    printf("El valor maximo es %d y se repite %d veces \n",val_max,contador);
    printf(".UBICACION:\n.fila %d\n.columna %d",fila+1,columna+1);
}
