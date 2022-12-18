//Hacer un algoritmo y programa que llene una matriz de 5 * 6 y que
//imprima cuantos de los números almacenados son ceros, cuantos son positivos y cuantos son negativos.

#include <stdlib.h>
#include <stdio.h>

int main(){
    int filas=5, columnas=6;
    int matriz[filas][columnas], i, j, cont_pos=0, cont_neg=0, cont_cero=0;

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
            if(matriz[i][j]>0)
                cont_pos++;
            else
                if(matriz[i][j]<0)
                    cont_neg++;
                else
                    cont_cero++;
        }
        printf("\n");
    }
    printf("En la matriz hubo %d positivo(s)\n", cont_pos);
    printf("En la matriz hubo %d negativo(s)\n", cont_neg);
    printf("En la matriz hubo %d cero(s)\n\n", cont_cero);
    return 0;
}