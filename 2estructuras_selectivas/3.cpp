//El número de sonidos emitidos por un grillo en un minuto, es una función de la temperatura
//Como resultado de esto, es posible determinar el nivel de la temperatura haciendo uso de grillo  como termómetro
//La función es:   T = n/4 +40, T es la temperatura en grados Fahrenheit y N numero de sonidos emitidos por minuto
//Construya un algoritmo que permita calcular la temperatura, teniendo en cuenta el número de sonidos emitidos por el grillo.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float temperatura_f;

    printf("Ingrese el número de sonidos que emitió el grillo: ");
    scanf("%d", &n);
    temperatura_f = (float)n/4 +40;

    printf("La temperatura acutal es de: %.2f grados fahrenheit\n\n", temperatura_f);

    return 0;
}