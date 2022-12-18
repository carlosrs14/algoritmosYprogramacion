//Hacer un algoritmo y programa que llene una matriz de 10 * 10
//que almacene en la diagonal principal unos y en las demás posiciones ceros.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=10;
    int matriz[num][num], i, j;

    for(i=0;i<num;i++)
        for(j=0; j<num; j++){
            if(i==j)
                matriz[i][j]=1;
            else
                matriz[i][j]=0;
        }
    
    for(i=0;i<num;i++){
        for(j=0; j<num; j++){
            printf("[%d]", matriz[i][j]);
        }
    printf("\n");
    }
    printf("\n\n");
    return 0;
}