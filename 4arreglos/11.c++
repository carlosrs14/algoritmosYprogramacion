//Diseñe un algoritmo y programa que lea dos vectores A y B de 20 elementos cada uno
//multiplique el primer elemento de A con el ultimo elemento de B
//luego el segundo elemento de A por el diecinueveavo elemento de B
//así sucesivamente hasta llegar al veinteavo elemento de A por el primer elemento de B. 
//El resultado de la multiplicación almacenarlo en un vector C.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=5;
    int i, vecA[tam], vecB[tam], vecC[tam], copytam=tam-1;

    printf("Ingrese los numeros del vector A\n");
    for(i=0; i<tam; i++){
        printf("Ingrese el %d numero de A: ", i+1);
        scanf("%d", &vecA[i]);
    }
    printf("\n\nIngrese los numeros del vector B\n");
    for(i=0; i<tam; i++){
        printf("Ingrese el %d numero de B: ", i+1);
        scanf("%d", &vecB[i]);
    }

    for(i=0; i<tam; i++){
        vecC[i]=vecA[i]*vecB[copytam];
        copytam--;
    }

    copytam=tam-1;
    printf("\n\n");

    for(i=0; i<tam; i++){
        printf("%d)\tA[%d]%d * B[%d]%d = C[%d]%d\n",i+1,i, vecA[i],copytam, vecB[copytam], i, vecC[i]);
        copytam--;
    }
    //system("pause");
    return 0;
}