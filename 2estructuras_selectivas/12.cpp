//Construya un algoritmo que pueda determinar, dados dos números enteros, cual es el número mayor o si son iguales.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    printf("Número mayor o iguales\n");
    printf("Ingrese un primer número: ");
    scanf("%d", &num1);
    printf("Ingrese un segundo número: ");
    scanf("%d", &num2);

    if(num1<num2)
        printf("El número %d (el segundo) era el mayor", num2);
    else 
        if(num1>num2)
            printf("El número %d (el primero) era el mayor", num1);
        else
            printf("Los número ingresados son iguales");
    printf("\n\n");
    return 0;
}