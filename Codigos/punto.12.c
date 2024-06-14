#include <stdio.h>
int main(){
    int anios,dias;
    printf("¿Cual es tu edad?\n");
    scanf("%d", &anios);
    dias= anios*365;
    printf("Tu edad en dias es \n%d", dias);
}