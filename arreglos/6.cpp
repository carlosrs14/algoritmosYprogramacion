//Almacenar 150 números en un vector
//almacenarlos en otro vector en orden inverso al vector original
//imprimir el vector resultante.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>
int main(){
    int tam=10;
    int i, vec[tam], vecinverso[tam], copytam=tam-1;

    printf("Ingresa %d números negativos positivos o cero\n\n", tam);

    for(i=0; i<tam; i++){
        printf("Ingresa el %d numero: ", i+1);
        scanf("%d", &vec[i]);
    }
    for(i=0; i<tam; i++){
        vecinverso[copytam]=vec[i];
        copytam--;
    }
    printf("\nEl vector normal es: \n");
    for(i=0; i<tam; i++){
        printf("[%d] %d\t", i, vec[i]);
    }

    printf("\nEl vector invertido es: \n");
    for(i=0; i<tam; i++){
        printf("[%d] %d\t", i, vecinverso[i]);
    }
    //system("pause");

    return 0;
}