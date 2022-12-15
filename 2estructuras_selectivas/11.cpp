//Dados los datos A, B, C  y  D que representan números enteros, 
//escriba un algoritmo que calcule  y muestre los resultados de las siguientes expresiones: 
//(A - C)^2/D    y    (A - B)^3/D               (Recuerde D <>  0)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A, B, C, D;
    float operacion1, operacion2;
    printf("Se harán las siguientes operaciones:\n");
    printf("(A - C)^2/D  y  (A - B)^3/D\n");
    printf("Ingrese el número A: ");
    scanf("%d", &A);
    printf("Ingrese el número B: ");
    scanf("%d", &B);
    printf("Ingrese el número C: ");
    scanf("%d", &C);
    printf("Ingrese el número D: ");
    scanf("%d", &D);

    if(D==0)
        printf("No se puede hacer la división entre 0\n\n");
    else{
        operacion1=(float) pow((A-C),2)/D;
        operacion2=(float) pow((A-B),3)/D;
        printf("El resultado de la operaciones es:\n");
        printf("Operación 1: %.2f\n", operacion1);
        printf("Operación 2: %.2f\n\n", operacion2);
    }
    return 0;
}