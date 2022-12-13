//Construya un algoritmo tal, que dado el costo de un artículo vendido y la cantidad de dinero entregada por el cliente
//calcule e imprima  el cambio que debe entregársele al mismo.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float costo, ingreso;
    printf("Ingresa el costo del articulo:");
    scanf("%f", &costo);
    printf("Ingresa el dinero que pagó el cliente:");
    scanf("%f", &ingreso);

    printf("El cambio para el cliente será: %.2f\n\n", ingreso-costo);
    return 0;
}