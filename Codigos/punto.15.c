#include <stdio.h>
int main(){
    float base,altura,perimetro,area;
    printf("Introduce el valor en metros de la altura\n");
    scanf("%f",&altura);
    printf("Ahora introduce el valor en metros de la base\n");
    scanf("%f",&base);
    perimetro= base+altura;
    area= base*altura;
    printf("La superficie del rectangulo= %.3fm2\n", area);
    printf("El perimetro del rectangulo= %.3fm", perimetro);
}