//Escriba un algoritmo  tal, que dado el radio  de un círculo
//calcule e imprima su área y la longitud de su circunferencia. (área= π*radio2,    circun=2* π*radio)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float radio, area, perimetro;
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    area=M_PI*radio*radio;
    perimetro=2*M_PI*radio;

    printf("El area de la circunferencia es: %.2f\n", area); 
    printf("y el perimetro es: %.2f\n\n", perimetro);


    return 0;
}