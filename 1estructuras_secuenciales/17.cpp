//Construya un algoritmo tal, que dados el radio, la generatriz y la  altura de un cono;
//calcule e imprima el área de la base, el área lateral,  el área total y el volumen.
//(A.base=π*radio2   A.lateral=π*radio*gener,    A.total=A.base+A.lateral         volumen=1/3*A.base*altura)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float radio, generatriz, altura, area_base, area_lateral, area_total, volumen;
    printf("Cono\n");
    printf("Ingrese el radio de la base del cono: ");
    scanf("%f", &radio);
    printf("Ingrese la generatriz: ");
    scanf("%f", &generatriz);
    printf("Ingrese la altura del cono: ");
    scanf("%f", &altura);

    area_base=(float)M_PI*radio*radio;
    area_lateral= (float)M_PI*radio*generatriz;
    area_total= (float)area_lateral+ area_base;
    volumen= (float) 1/3*area_base*altura;

    printf("El area de la base es: %.2f\n", area_base);
    printf("El area lateral es: %.2f\n", area_lateral);
    printf("El area total es: %.2f\n", area_total);
    printf("El volumen es: %.2f\n\n", volumen);
    return 0;
}
