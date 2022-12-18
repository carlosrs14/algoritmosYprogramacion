//Hacer un algoritmo y programa que llene una matriz de 6 * 8
//que almacene toda la matriz en un vector. Imprimir el vector resultante.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int filas=6, columnas=8;
    int matriz[filas][columnas], vector[filas*columnas], i, j, k=0;

    for(i=0; i<filas;i++){
        for(j=0; j<columnas; j++){
            printf("Ingrese un número para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz\n");
    for(i=0;i<filas;i++){
        for(j=0; j<columnas; j++){
            printf("[%d]", matriz[i][j]);
            vector[k]=matriz[i][j];
            k++;

        }
        printf("\n");
    }

    printf("Vector\n");
    for(i=0; i<k; i++){
        printf("[%d]\t", vector[i]);
    }

    printf("\n\n");
    return 0;
}