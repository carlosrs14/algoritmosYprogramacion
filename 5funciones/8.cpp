//Crear una función que Facilite el ingreso de dos números enteros y/o reales,
//muestre su suma, resta, multiplicación, división y el resto (módulo) de la división.

#include <stdio.h>
#include <stdlib.h>
void operaciones();

int main(){
    operaciones();
    return 0;
}
void operaciones(){
    float num1, num2;
    printf("Ingrese un número: ");
    scanf("%f", &num1);
    printf("Ingrese un número: ");
    scanf("%f", &num2);
    printf("\nLa suma de esos dos números es %.2f\n", num1+num2);
    printf("La resta de esos dos números es %.2f\n", num1-num2);
    printf("La multiplicación de esos dos números es %.2f\n", num1*num2);
    if(num2==0)
        printf("La división de esos dos número no se puede hacer ya que uno es 0\n\n");
    else
        printf("La división de esos dos números es %.2f\n\n", num1/num2);
}