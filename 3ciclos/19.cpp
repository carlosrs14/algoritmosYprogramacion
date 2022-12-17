//escriba un algoritmo  tal, que dado N números enteros como datos, calcule cual es el mayor y el menor de estos números.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, numero, mayor, menor;
    printf("Mayor y menor\nIngrese cuantos números va a digitar: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Ingrese un número(%d): ",i);
        scanf("%d", &numero);
        if(i==1){
            mayor=numero;
            menor=numero;
            if(n==1){
                printf("Solo se ingresó un número: %d\n\n", numero);
                return 0;
            }
        }else{
            if(numero<menor)
                menor=numero;
            
            if(numero>mayor)
                mayor=numero;
            
        }
    }
    printf("El número mayor fue: %d\n", mayor);
    printf("El número menor fue: %d\n\n", menor);
    return 0;
}