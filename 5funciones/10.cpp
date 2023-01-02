//Crear una función  que Facilite el ingreso de tres números enteros y/o reales,
//muestre su respectiva suma y multiplicación

#include <stdio.h>
#include <stdlib.h>

void funcion();

int main(){
    
    funcion();
    return 0;
}

void funcion(){
    float num1, num2, num3, mult, sum;

    printf("Ingrese tres números: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sum = num1+num2+num3;
    mult = num1*num2*num3;
    printf("La suma de esto tres números es: %.2f y la multiplicación es: %.2f\n\n", sum, mult);

}