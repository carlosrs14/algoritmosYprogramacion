//Construya un algoritmo tal, que dado los datos enteros  A y B, escriba el resultado de la siguiente expresión: (A+B)2 / 3
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int a, b;
    float operacion;
    printf("Ingrese los numeros a y b en ese orden: ");
    scanf("%d %d", &a, &b);

    operacion=(float)(a+b)*2/3;
    printf("El resultado de la operación es: %.2f\n\n", operacion);
    //system("pause");
    return 0;
}