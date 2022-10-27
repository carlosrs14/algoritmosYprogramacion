//Llenar un vector de 20 elementos, imprimir la posición y el valor del elemento mayor almacenado en el vector.
//Suponga que todos los elementos del vector son diferentes.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=10;
    int i, vec[tam], mayor;
    
    printf("Ingresarás %d numeros enteros y te diré el mayor\n\n", tam);
    for(i=0; i<tam; i++){
        
        printf("Ingresa el %d numero: ", i+1);
        scanf("%d", &vec[i]);
        if(i==0){
            mayor=vec[i];
        }else
            if(vec[i]>mayor)
                mayor=vec[i];
    }

    for(i=0; i<tam; i++){
        if(vec[i]==mayor)
            printf("\n\nPosición: %d, número: %d\n", i+1, vec[i]);
    }
    
    //system("pause");
    return 0;
}