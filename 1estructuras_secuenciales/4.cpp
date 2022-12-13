//Escriba un algoritmo  que permita calcular  e imprimir el cuadrado y el cubo  de un numero entero positivo Num.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;
    printf("Ingresa un número entero positivo para calcular el cuadrado y el cubo: ");
    scanf("%d", &numero);

    printf("El cuadrado de ese número es: %d\n", numero*numero);
    printf("Y el cubo es: %d\n\n", numero*numero*numero);
    return 0;
}