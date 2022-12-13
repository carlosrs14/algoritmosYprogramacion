//Construya un algoritmo tal, que dado como datos la base y la altura de un rectángulo
//calcule el perímetro y la superficie del mismo. (sup=b*a, pe=2(b+a))
#include <stdio.h>
#include <stdlib.h>

int main(){

    int base,altura;
    printf("Ingresa la base y la altura de un rectangulo: ");
    scanf("%d %d", &base, &altura);

    printf("El area de este rectangulo es: %d\n", base*altura);
    printf("El perimetro es: %d\n\n", 2*(base+altura));
    return 0;
}