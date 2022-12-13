//Una persona compro un terreno en un país sudamericano. La extensión del terreno esta especificada en acres.
//Construya un algoritmo tal que dado como datos  la extensión del terrero en acres
//calcule e imprima la extensión del mismo en hectárea. (1 acre=4047 m2, 1 hectárea=10000 m2)

#include <stdio.h>
#include <stdlib.h>

int main(){
    float hectareas, acres, metros;
    printf("Ingrese un area en acres y se expresará en hectareas: ");
    scanf("%f", &acres);
    metros= (float) acres*4047;
    hectareas= (float) metros/10000;
    printf("La cantidad ingresada en hectareas es %.2f\n\n", hectareas);

    return 0;
}