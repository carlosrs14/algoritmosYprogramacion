//Hacer un algoritmo y programa que llene una matriz de 10 * 10 y 
//determine la posición [renglón ,columna] del numero mayor almacenado en la matriz. Los números son diferentes.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, matriz[10][10], mayor;
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("Ingrese un número en la posición [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i==0 && j==0)
                mayor=matriz[0][0];
            else
                if(matriz[i][j]>mayor)
                    mayor=matriz[i][j];
        }
    }
    printf("El número mayor de la matriz fue: %d", mayor);
    return 0;
}