//Escriba un algoritmo  tal, que dados como datos dos números reales, calcule la suma, resta y multiplicación de dichos números.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1,numero2;
    printf("Ingresa dos números para calcular la suma, resta y división: ");
    scanf("%d %d", &numero1, &numero2);

    printf("La suma de estos dos números es: %d\n", numero1+numero2);
    printf("La resta de estos números es: %d\n", numero1-numero2);
    printf("La multiplicación es: %d\n\n", numero1*numero2);
    return 0;
}