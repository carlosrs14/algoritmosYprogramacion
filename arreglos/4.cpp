//Almacenar 500 números en un vector, elevar al cuadrado cada valor almacenado en el vector
//almacenar el resultado en otro vector. Imprimir el vector original y el vector resultante.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=5;
    int i, vec[tam], cuadrados[tam];
    
    printf("Ingresarás %d numeros enteros y calcularé el cuadrado\n\n", tam);
    for(i=0; i<tam; i++){
        
        printf("Ingresa el %d numero: ", i+1);
        scanf("%d", &vec[i]);

        cuadrados[i]=vec[i]*vec[i];
    }

    for(i=0; i<tam; i++){
        printf("\nNúmero Ingresados:\nPosición: %d, número: %d, cuadrado: %d ", i+1, vec[i], cuadrados[i]);
        //printf("cuadrado: %d", cuadrados[i]);
    }
    printf("\n");
    //system("pause");
    return 0;
}

