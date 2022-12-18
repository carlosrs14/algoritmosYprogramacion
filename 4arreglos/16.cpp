//Hacer un algoritmo y programa que llene una matriz de 20 * 20.
//Sumar las columnas e imprimir que columna tuvo la máxima suma y la suma de esa columna.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=3;
    int matriz[num][num], i, j, max, indice_max, suma;

    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("Ingrese un número para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
     for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<num; i++){
        suma=0;
        for(j=0; j<num; j++){
            suma+= matriz[j][i];
        }
        if(j==0){
            max=suma;
            indice_max=i;
        }else
            if(suma>max){
                max=suma;
                indice_max=i;
            }
    }

    printf("La columna que tuva la máxima suma tiene el indice: %d y su suma fue: %d\n\n", indice_max, max);
    return 0;
}