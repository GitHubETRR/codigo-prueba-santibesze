#include <stdio.h>
int main(){
    float Lado_a,Lado_b,Lado_c;
    printf("Ingrese la medida de uno lado del triangulo\n");
    scanf(" %f",&Lado_a);
    printf("Ingrese la medida del otro lado del triangulo\n");
    scanf(" %f",&Lado_b);
    printf("Ingrese la medida del ultimo lado del triangulo\n");
    scanf(" %f",&Lado_c);
    if ((Lado_a>(Lado_b+Lado_c)) || (Lado_b>(Lado_a+Lado_c)) || (Lado_c>(Lado_a+Lado_b)))
    {
        printf("Las medidas de los lados no pueden formar un triangulo");
    }
    else
    {
        if ((Lado_a==Lado_b) && (Lado_a==Lado_c))
        {
            printf("su triangulo es equilatero y");
        }
        if ((Lado_a==Lado_b) || (Lado_a==Lado_c) || (Lado_b==Lado_c))
        {
            printf(" su triangulo es isósceles");
        }
        if ((Lado_a!=Lado_b) && (Lado_a!=Lado_c))
        {
            printf("su triangulo es escaleno");
        }
    }
}   
