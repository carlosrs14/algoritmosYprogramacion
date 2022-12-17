//Hacer un algoritmo y programa que llene una matriz de 7 * 7. Calcular
//la suma de cada renglón y almacenarla en un vector, la suma de cada columna y almacenarla en otro vector.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=3, i, j, matriz[7][7], suma_fila[7], suma_columna[7], sumas;
    
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("Ingrese un número en la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("[%d]\t", matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<num; i++){
        sumas=0;
        for(j=0; j<num; j++){
            sumas+=matriz[i][j];
        }
        suma_fila[i]=sumas;
    }
    for(i=0; i<num; i++){
        sumas=0;
        for(j=0; j<num; j++){
            sumas+=matriz[j][i];
        }
        suma_columna[i]=sumas;
    }
    
    printf("\nLas sumas por filas son: \n");
    for(i=0; i<num; i++)
        printf("[%d] ", suma_fila[i]);
    printf("\nLas sumas por columnas son:\n");
    for(i=0; i<num; i++)
        printf("[%d] ", suma_columna[i]);
    printf("\n\n");

    return 0;
}