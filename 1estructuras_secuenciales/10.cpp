//Construya un algoritmo que resuelva el problema que tienen en una gasolinera.
//Los surtidores de la misma registran lo que venden  en galones, pero el precio de la gasolina esta fijado en litros
//El algoritmo debe calcular e imprimir lo que hay que cobrarle al cliente si el precio del litro es de $6600. (galón=3,785 litros)

#include <stdlib.h>
#include <stdio.h>

int main(){
    float costo_litro=6600, galones, litros;
    
    printf("Ingrese la cantidad de gasolina en galones: ");
    scanf("%f", &galones);
    
    litros=galones*3.785;
    costo_litro=litros*6600;

    printf("El valor a pagar del cliente es: %.2f\n\n", costo_litro);
    return 0;
}

