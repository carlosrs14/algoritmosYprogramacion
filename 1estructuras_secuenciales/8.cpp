//Construya un algoritmo tal, que dado como datos la base y la altura de un triangulo
//calcule e imprima su superficie.(base*altura/2)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int base,altura;
    printf("Ingresa la base y la altura de un triangulo: ");
    scanf("%d %d", &base, &altura);

    printf("El area de este triangulo es: %.1f\n\n",(float) base*altura/2);
    return 0;
}