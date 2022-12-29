//Crear una función que calcule cual es el número menor de dos números enteros

#include <stdio.h>
#include <stdlib.h>
void menor();

int main(){
    printf("Que número es menor?\n");
    menor();
    return 0;
}

void menor(){
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    if(num1<num2)
        printf("El número %d fue el menor", num1);
    else
        if(num1>num2)
            printf("El número %d fue el menor", num2);
        else
            printf("Los número ingresados son iguales");
}