//Hacer un algoritmo y programa que almacene números en una matriz de 5 * 6.
//Imprimir la suma de los números almacenados en la matriz.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, matriz[5][6], suma=0;
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            printf("Ingrese un número en la posición [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            suma+=matriz[i][j];
        }
    }
    printf("La suma de los elementos de la matriz es: %d", suma);
    return 0;
}