//Se tienen almacenados en la memoria dos vectores M y N de cien elementos cada uno.
//Hacer un algoritmo y programa que escriba la palabra “Iguales” si ambos vectores son iguales y “Diferentes” si no lo son.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=10, i;
    //vetores y inicializados
    int vecM[tam]={5,6,7,8,3,-8,0,-10,20,1};
    int vecN[tam]={5,6,7,8,3,-8,0,-10,20,1};

/*    //vecotres inicializados manualmente
    int vecM[tam], vecN[tam];
    printf("Los vectores tendrán %d numeros cada uno\n", tam);
    printf("Ingresarás %d numeros, uno para M y uno para N\n", tam*2);
    for(i=0; i<tam; i++){
        printf("Ingresa el %d numero para M: ", i+1);
        scanf("%d", &vecM[i]);
        printf("Ingresa el %d numero para N: ", i+1);
        scanf("%d", &vecN[i]);
        printf("\n");
    }
*/
    for(i=0; i<tam; i++){
        if(vecM[i]!=vecN[i]){
            printf("Diferentes\n");
            //system("pause");
            return 0;
        }
    }
    printf("Iguales\n");
    //system("pause");
    return 0;
}