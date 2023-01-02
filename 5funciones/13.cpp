//Calcule el área de un cuadrado.

#include <stdio.h>
#include <stdlib.h>

float area(float);

int main(){
    float lado, ar;
    printf("Ingrese el lado de un cuadradado: ");
    scanf("%f", &lado);
    ar = area(lado);
    printf("El area del cuadrado es: %.2f\n\n", ar);
    return 0;
}

float area(float lado){
    return lado*lado;
}
