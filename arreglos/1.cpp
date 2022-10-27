//Calcular el promedio de 50 valores almacenados en un vector. 
//Determinar además cuantos son mayores que el promedio, imprimir el promedio, 
//el numero de datos mayores que el promedio y una lista de valores mayores que el promedio.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=10;
    int i, nmayores=0, mayores[tam], suma, vec[tam], numero, j=0;
    float promedio;
    printf("Ingresarás %d numeros enteros: \n", tam);
    for(i=0; i<tam; i++){
        printf("Ingresa el %d numero: ", i+1);
        scanf("%d", &vec[i]);
        suma+=vec[i];
    }
    promedio=(float)suma/tam;
    for(i=0; i<tam; i++){
        if(vec[i]>promedio){
            mayores[j]=vec[i];
            nmayores+=1;
            j+=1;
        }
    }

    printf("\n\nLos numero mayores que el promedio fueron: %d\n",nmayores);
    printf("El promedio de los datos fue: %.2f\n", promedio);
    for(i=0; i<nmayores; i++){
        printf("el numero %d mayor que el promedio fue: %d\n",i+1, mayores[i]);

    }
    //system("pause");
    return 0;
}