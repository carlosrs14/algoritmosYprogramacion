//Construya un algoritmo tal, que dado como dato el lado de un hexaedro o cubo; 
//calcule e imprima el área de la base, el área lateral,  el área total y el volumen. (A.base=L2,    A.lateral=4* L2     A.total= 6*L2  volumen=L3)
#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado, area_base, area_lateral, area_total, volumen;
    printf("Se calculará el area de la base, el area lateral, el area total y el volumen\n");
    printf("Ingrese el lado del cubo: ");
    scanf("%f", &lado);
    area_base = (float) lado*lado;
    area_lateral= (float) area_base*4;
    area_total= (float) area_base*6;
    volumen = (float) lado*lado*lado;
    printf("El area de la base es: %.2f\n", area_base);
    printf("El area lateral es: %.2f\n", area_lateral);
    printf("El area total es: %.2f\n", area_total);
    printf("El volumen es: %.2f\n",volumen);
    return 0;
}