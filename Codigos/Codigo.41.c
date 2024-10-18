#include <stdio.h>
int main(){
    char caracter;
    printf("Ingrese un caracter\n");
    scanf("%c",&caracter);
    if ((caracter=='a') || (caracter=='e') || (caracter=='i') || (caracter=='o') || (caracter=='u'))
    {
        printf("El caracter es una vocal");
    }
    else
    {
        printf("su caracter no es una vocal");
    }
}