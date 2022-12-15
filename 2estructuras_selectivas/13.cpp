//Construya un algoritmo  tal, que dados como datos de entrada tres números enteros
//determine si los mismos están en orden creciente.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;
    printf("Están los 3 número ordenados en orden creciente?\n");
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    if(num1<num2 && num2<num3)
        printf("Los números están en orden creciente\n\n");
    else
        printf("Los números no están organizados\n\n");
    return 0;
}