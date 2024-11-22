#include<stdio.h>
int main (){
    float num,num1,num2;
    printf("Ingrese el primero numero\n");
    scanf("%f",&num);
    printf("Ingrese el segundo sumero\n");
    scanf("%f",&num1);
    printf("Ingrese el ultimo numero\n");
    scanf("%f",&num2);
    if ((num==num1) && (num==num2))
    {
        printf("Los 3 numeros son iguales");
    }
    else
    {
        if ((num<num1)&&(num<num2))
        {
            printf("El numero mas chico es %f", num);
        }
        else
        {
            if ((num1<num)&&(num1<num2))
            {
                printf("El numero mas chico es %f", num1);
            }
            else
            {
                if ((num2<num)&&(num2<num1))
                {
                    printf("El numero mas chico es %f", num1);
                }
                
            }
        }
        
        
    }
    

}