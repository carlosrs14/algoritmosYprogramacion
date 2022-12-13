//En una casa de cambio necesitan construir un programa tal que:
//dado como dato una cantidad expresada en dólares, convierta esa cantidad en pesos
//Construya el algoritmo correspondiente.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float dolares, pesos, dolar1=4845.88;
    printf("Digete el valor en dolares: ");
    scanf("%f", &dolares);
    pesos = dolar1*dolares;
    printf("La cantidad %.2f en dolares equivale a %.2f en pesos\n\n", dolares, pesos);
    return 0;
}


