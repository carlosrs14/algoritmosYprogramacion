//Diseñe un pseudocódigo y programa que escriba el numero de la hilera cuya suma sea mayor que las demás hileras.
//Suponga que todas las hileras suman diferente cantidad.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=4;
    int matriz[num][num], i, j, suma, max, indice_max;

    for (i=0;i<num;i++){
        for(j=0; j<num; j++){
            printf("Ingrese un número para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<num;i++){
        suma=0;
        for(j=0; j<num; j++){
            printf("[%d]", matriz[i][j]);
            suma+=matriz[i][j];
        }
        printf("\n");
        if(i==0){
            max=suma;
            indice_max=i;
        }else 
            if(suma>max){
                max=suma;
                indice_max=i;
            }
    }
    printf("La hilera o fila con la máxima suma fue la que tiene el indice %d y la suma fue %d\n\n", indice_max, max);

    return 0;
}
