//Construya un algoritmo que pueda determinar, dados dos números enteros, si un numero es divisor de otro.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Número divisor de otro(A/B)\n");
    printf("Ingrese el número A: ");
    scanf("%d", &num1);
    printf("Ingrese el número B: ");
    scanf("%d", &num2);

    if(num2==0)
        printf("No se puede hacer la división entre 0\n\n");
    else 
        if(num1%num2==0)
            printf("El número %d es divisior de %d\n", num2, num1);
        else
            printf("El número %d NO es divisior de %d\n", num2, num1);
    return 0;
}