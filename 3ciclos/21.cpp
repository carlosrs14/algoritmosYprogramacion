//un vendedor ha hecho una serie de ventas y desea saber
//cuantas de estas fueron de $200 o menos,
//cuantas fueron mayores a $200 pero inferiores a $400
//cuantas de $400 o superiores a tal cantidad y
//finalmente el porcentaje del rango medio (200 - 400) sobre el número total de  ventas.
//Haga un algoritmo que le proporcione  al vendedor esta información después de haber leído los datos de entrada.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, ventas, cont_tipo1=0, cont_tipo2=0, cont_tipo3=0;
    float valor, porcentaje;
    printf("Tienda\nIngrese el número de ventas que hizo: ");
    scanf("%d", &ventas);
    for(i=1; i<=ventas; i++){
        printf("Ingres el valor de la venta #%d: ", i);
        scanf("%f", &valor);
        if(valor<=200){
            cont_tipo1++;
        }
        else
            if(valor<400){
                cont_tipo2++;
            }
            else
                cont_tipo3++;

    }
    porcentaje=(float) cont_tipo2*100/ventas;
    printf("El número de ventas menores o iguales a 200 fueron: %d\n", cont_tipo1);
    printf("El número de ventas entre 200 y 400 fueron: %d\n", cont_tipo2);
    printf("El número de ventas mayores o iguales a 400 fueron: %d\n", cont_tipo3);
    printf("El porcentaje del rango medio con respecto al total es: %.2f%%\n\n", porcentaje);

    return 0;
}