//Construya un algoritmo que calcule e imprima el número de minutos que hay en un determinado número de días.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dias, minutos;
    printf("Ingrese un número de días y te diré cuandos minutos tienen dichos días: ");
    scanf("%d", &dias);
    minutos=dias*24*60;
    
    printf("El número de minutos que hay en esos días es: %d\n\n", minutos);
    return 0;
}