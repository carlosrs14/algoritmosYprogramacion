//Construya un algoritmo tal, que dados como datos  14  números naturales positivos, calcule e imprima el cubo de estos números.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, numero, numeros=14;

    printf("Cubo de %d numeros\n\n", numeros);

    for(i=1; i<=numeros; i++){
        printf("Ingresa el %d número entero positivo: ", i);
        scanf("%d", &numero);
        printf("El cubo de %d es: %d\n\n",numero, numero*numero*numero);        
    }

    printf("\n\n");
    //system("pause");
    return 0;
}