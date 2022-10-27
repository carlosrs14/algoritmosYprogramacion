//Diseñe un algoritmo y programa que lea un numero cualquiera y lo busque en el vector X, el cual tiene almacenados 80 elementos.
//Escribir la posición donde se encuentra almacenado el numero en el vector o el mensaje “NO” si no lo encuentra. Búsqueda secuencial.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,numero, tam=15;
    int vec[tam]={-40,-6,-5,-3,-2,0,3,5,8,10,18,25,45,57,60};

    printf("Ingresa un número para buscar en el vector: ");
    scanf("%d", &numero);
    for(i=0; i<tam; i++){
        if(numero==vec[i]){
            printf("\nEl numero %d tiene el indice [%d] den el vector\n\n", numero, i);
            //system("pause");
            return 0;
        }
    }
    printf("\nEl número ingresado no se encuentra en el vector\n\n");
    //system("pause");
    return 0;
}