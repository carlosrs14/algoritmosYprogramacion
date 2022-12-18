//Hacer un algoritmo y programa que llene una matriz de 8 * 8,
//que almacene la suma de los renglones y la suma de las columnas en un vector.
//Imprimir el vector resultante.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=4;
    int matriz[num][num], suma, vector_sum_filas[num], vector_sum_columnas[num], i, j;

    for(i=0; i<num;i++){
        for(j=0; j<num; j++){
            printf("Ingrese un número para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<num;i++){
        suma=0;
        for(j=0; j<num; j++){
            printf("[%d]", matriz[i][j]);
            suma+=matriz[i][j];
        }
        vector_sum_filas[i]=suma;
        printf("\n");
    }
    for(i=0; i<num;i++){
        suma=0;
        for(j=0; j<num; j++){
            suma+=matriz[j][i];
        }
        vector_sum_columnas[i]=suma;
    }
    printf("\nVector con las sumas de filas\n");
    for(i=0; i<num; i++){
        printf("[%d]\t", vector_sum_filas[i]);
    }
    printf("\nVector con las sumas de columnas\n");
    for(i=0; i<num; i++){
        printf("[%d]\t", vector_sum_columnas[i]);
    }
    printf("\n\n");
    return 0;
}