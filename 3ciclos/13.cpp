//haga un algoritmo que calcule la suma de los números pares comprendidos entre 10 y 50.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int suma=0, i;

    printf("Se calculará la suma de los números pares entre 10 y 50(contando estos)\n");
    for(i=10; i<=50; i++){
        if(i%2==0){
            suma+=i;
        }
    }
    printf("La suma es: %d\n\n", suma);
    return 0;
}