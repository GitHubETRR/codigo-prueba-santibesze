/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
      int base=0;
  int altura=0;
  
    printf("Este programa calcula el area de un rectangulo\n");
    printf("Ingrese la medida de la base del rectangulo:\n");
    scanf("%d",&base);
    printf("Ingrese la altura del triangulo:\n");
    scanf("%d",&altura);
    printf("El area del rectangulo es: %d",(base*altura));
    return 0;
}