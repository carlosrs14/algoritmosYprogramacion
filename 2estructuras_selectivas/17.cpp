//En una tienda se efectúan un descuento a los clientes dependiendo del monto de la compra.
//El descuento se efectúa  con base en el siguiente criterio:
//si el monto es menor que $500 --> no hay descuento,
//si el monto esta comprendido entre  $500  y $1000 inclusive -->  5% de descuento,
//si el monto esta comprendido entre  $1001  y $7000 inclusive -->  11% de descuento,
//si el monto esta comprendido entre  $7001  y $15000 inclusive -->  18% de descuento,
//si el monto es mayor a $15000 -->  25% de descuento.
//Construya un algoritmo tal, que dado el monto de la compra de un cliente, determine lo que el mismo debe pagar.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float monto, total;
    printf("Tienda\n");
    printf("Ingrese el valor a pagar: ");
    scanf("%f", &monto);
    if(monto<500){
        printf("NO hay descuento el valor a paga es: %.2f", monto);
    }
    else
        if(monto<=1000){
            total=(float) monto - monto*5/100;
            printf("Descuento de 5%% el valor a pagar es: %.2f", total);
        }
        else
            if(monto<=7000){
                total=(float) monto - monto*11/100;
                printf("Descuento de 11%% el valor a pagar es: %.2f", total);
            }
            else
                if(monto<=15000){
                    total=(float) monto - monto*18/100;
                    printf("Descuento de 18%% el valor a pagar es: %.2f", total);
                }
                else{
                    total=(float) monto - monto*25/100;
                    printf("Descuento de 25%% el valor a pagar es: %.2f", total);
                }

    printf("\n\n");
    return 0;
}