//Hacer un algoritmo y programa que llene una matriz de 5 * 5
//que almacene la diagonal principal en un vector. Imprimir el vector resultante.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=3;
    int matriz[num][num], vector[num], i, j;

    for(i=0;i<num;i++){
        for(j=0; j<num; j++){
            printf("Ingrese un número para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<num;i++){
        for(j=0; j<num; j++){
            printf("[%d]", matriz[i][j]);
            if(i==j){
                vector[i]=matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("Diagonal principal\n");
    for(i=0; i<num; i++){
        printf("[%d]\t", vector[i]);
    }
    printf("\n\n");
    return 0;
}