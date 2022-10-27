//Construya un algoritmo tal, que dados como datos 23 números enteros,  obtenga el numero de ceros que hay entre estos números.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, numero, nceros=0;

    printf("Número de ceros\n\n");

    for(i=1; i<=23; i++){
        printf("Ingresa el %d número: ", i);
        scanf("%d", &numero);
        if(numero==0){
            nceros++;
        }
    }

    printf("El número de ceros es: %d\n\n", nceros);
    //system("pause");
    return 0;
}