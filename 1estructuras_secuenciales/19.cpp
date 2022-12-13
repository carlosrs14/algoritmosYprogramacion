//Construya un algoritmo que calcule y muestre la distancia entre dos puntos dados 
//P1(x1,y1) y P2 (x2,y2).           Dist=((X1-X2)2 + (Y1-Y2))1/2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, distancia;
    printf("Dados dos puntos del plano, se calculará la distancia entre estos\n\n");
    printf("Ingrese las coordenadas x, y del punto número 1: ");
    scanf("%f %f", &x1, &y1);
    printf("Ingrese las coordenadas x, y del punto número 2: ");
    scanf("%f %f", &x2, &y2);
    distancia=(float)sqrt(pow(x1-x2, 2) + pow(y1-y2,2));

    printf("La distacia entre estos dos puntos es: %.2f\n\n", distancia);
    return 0;
}