//Dados los datos A, C  y  D que representan números enteros
//escriba un algoritmo que calcule  y muestre el resultado de las siguiente expresión:
//(A - C) / D     (Recuerde D <>  0)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, c, d;
    float resultado;
    printf("(A-C)/D\n");
    printf("Ingrese el valor de A: ");
    scanf("%d", &a);
    printf("Ingrese el valor de C: ");
    scanf("%d", &c);
    printf("Ingrese el valor de D: ");
    scanf("%d", &d);

    if(d==0){
        printf("No se puede dividir entre 0\n\n");
    }else{
        resultado = (float) (a-c)/d;
        printf("El resultado de la operación es: %.2f\n\n", resultado);
    }
    return 0;
}