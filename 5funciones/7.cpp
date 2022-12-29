//Crear una función Que escriba el porcentaje descontado en una compra,
//introduciendo la cantidad comprada, el precio (valor) de la compra y el precio (valor) pagado.

#include <stdio.h>
#include <stdlib.h>

void descuento(int, float, float);

int main(){
    int cantidad;
    float precio, pagado;

    printf("Ingrese la cantidad comprada: ");
    scanf("%d", &cantidad);
    printf("Ingrese el precio del articulo comprado: ");
    scanf("%f", &precio);
    printf("Ingrese el precio pagado: ");
    scanf("%f", &pagado);
    descuento(cantidad, precio, pagado);

    return 0;
}

void descuento(int cantidad, float precio, float pagado){
    float precio_verdadero= (float)cantidad*precio, descuento;
    if(precio_verdadero<pagado)
        printf("El precio pagado fue mayor el que debía pagar\n\n");
    else{
        descuento= (float)100 - pagado*100/precio_verdadero;
        printf("El precio a pagar era %.2f y pagó %.2f", precio_verdadero, pagado);
        printf("\npo lo tanto el descuento fue de: %.2f%%\n\n", descuento);
    }
}