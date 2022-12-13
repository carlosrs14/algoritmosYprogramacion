//Construya un algoritmo tal que dado como dato un número entero
//determine e imprima si el mismo es positivo, negativo o nulo.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("¿0, entero o negativo?\n");
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    if(numero>0)
        printf("El número %d es positivo\n\n", numero);
    else 
        if(numero<0)
            printf("El número %d es negativo\n\n", numero);
        else
            printf("El número ingresado es 0\n\n");
    return 0;
}