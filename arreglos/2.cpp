//Llenar dos vectores A y B de 45 elementos cada uno, 
//sumar el elemento uno del vector A con el elemento uno del vector B y así sucesivamente hasta 45
//almacenar el resultado en un vector C, e imprimir el vector resultante.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=5;
    int i, vecA[tam], vecB[tam], vecC[tam];
    
    printf("Ingresarás %d numeros enteros uno para A y otro para B: \n", tam*2);
    for(i=0; i<tam; i++){
        
        printf("\nIngresa el %d numero para el vetor A: ", i+1);
        scanf("%d", &vecA[i]);

        printf("Ingresa el %d numero para el vetor B: ", i+1);
        scanf("%d", &vecB[i]);

        vecC[i]=vecA[i]+vecB[i];

    }
    printf("\n\nEl vector resultante fue: \n");
    for(i=0; i<tam; i++){
        printf("Posicion %d = %d\n", i+1, vecC[i]);
    }
    
    //system("pause");
    return 0;
}