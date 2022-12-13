//Escriba un algoritmo  tal, que dado el radio  y la altura de un cilindro
//calcule e imprima su área y su volumen. (área=2* π*radio*altura,    volumen= π*radio2*altura)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float radio, altura, volumen, area;
    printf("Dadas la altura y el radio de un cilindro se calculará el area y volumen\n\n");

    printf("Ingrese el valor del radio del cilindro: ");
    scanf("%f", &radio);
    printf("Ingrese el valor de la altura del cilindro: ");
    scanf("%f", &altura);
    area=(float) 2*M_PI*radio*altura;
    volumen=(float) M_PI*radio*radio*altura;

    printf("El area del cilindro es: %.2f y su volumen es: %.2f", area, volumen);
    return 0;
}