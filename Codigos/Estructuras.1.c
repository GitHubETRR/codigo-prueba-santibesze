#include <stdio.h>

struct Alumno{
    char Nombre[20];
    char Apellido[20];
    char TragoFav[30];
    int Internas;
    int Quebradas;
};
void datosAlumno(struct Alumno*alumno){
    printf("Escriba su nombre\n");
    scanf("%s",&alumno->Nombre);
    printf("Escriba su apellido\n");
    scanf("%s",&alumno->Apellido);
    printf("¿Cual es su trago favorito?\n");
    scanf("%s",&alumno->TragoFav);
    printf("¿Cantidad de internas?\n");
    scanf("%d",&alumno->Internas);
    getchar();
    printf("¿Cantidad de quebradas?\n");
    scanf("%d",&alumno->Quebradas);
    getchar();

}
void mostrarAlumno(struct Alumno alumno){
    printf("Nombre: %s", alumno.Nombre);
    printf("Apellido: %s",alumno.Apellido);
    printf("Trago favorito: %s", alumno.TragoFav);
    printf("Internas: %d",alumno.Internas);
    printf("Total de quebradas: %d", alumno.Quebradas);
}

int main(){
    struct Alumno alumno1;
    datosAlumno(&alumno1);
    mostrarAlumno(alumno1);
    return 0;
}

