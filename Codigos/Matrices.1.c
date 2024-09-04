#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void val_aleatorios(int matriz[N][N]);
void buscar_val_max(int matriz[N][N], int fila, int columna, int val_max);

int main(){
    int matriz[N][N];
    int val_max = 0;
    int fila = 0;
    int columna = 0;
    val_aleatorios(matriz);
    buscar_val_max(matriz, fila, columna, val_max);
} 

void val_aleatorios(int matriz[N][N]){
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = rand() % 30+1;
            printf (  "%2d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

void buscar_val_max(int matriz[N][N], int fila, int columna, int val_max){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matriz[i][j] > val_max)
            {
                val_max = matriz[i][j];
                fila = i;
                columna = j;
            }
            
        }
        
    }
    printf("el valor maximo es %d\n",val_max);
    printf(".UBICACION:\n.fila %d\n.columna %d",fila+1,columna+1);
}