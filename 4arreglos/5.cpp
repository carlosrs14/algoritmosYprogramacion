//Almacenar 300 números en un vector, imprimir cuantos son ceros, cuantos son negativos, cuantos positivos.
//Imprimir además la suma de los negativos y la suma de los positivos.

//modificar tam para el numero de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam=10;
    int i, vec[tam],contneg=0, contpos=0, contcero=0, sumaneg=0, sumapos=0;

    printf("Ingresa %d números negativos positivos o cero\n\n", tam);

    for(i=0; i<tam; i++){
        printf("Ingresa el %d numero: ", i+1);
        scanf("%d", &vec[i]);
    }
    for(i=0; i<tam; i++){
        if(vec[i]>0){
            //positivo
            contpos++;
            sumapos+=vec[i];
        }else
            if(vec[i]<0){
                //negativo
                contneg++;
                sumaneg+=vec[i];
            }else
                //cero
                contcero++;

    }
    printf("\n\nHubo %d cero, %d negativos y %d positivos", contcero, contneg, contpos);
    printf("\nLa suma de los positivos fue %d y los negativos fue %d\n\n", sumapos, sumaneg);
    
    //system("pause");
    return 0;
}
