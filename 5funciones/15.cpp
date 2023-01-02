//Desarrolle una función que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrario.
#include <stdio.h>
#include <stdlib.h>

int esPrimo(int);

int main(){
    int numero;
    printf("Ingrese un número para saber si es primo o no: ");
    scanf("%d", &numero);
    if(esPrimo(numero)==1){
        printf("El número ingresado es primo\n\n");
    }else{
        printf("El número ingresado NO es primo\n\n");
    }
    return 0;
}

int esPrimo(int num){
    
    if (num%2==0)
        return 0;
    int div=0, i;
    
    for(i=1; i<num/2+1; i++){
        if(num%i==0){
            div++;
        }
    }
    if(div>1)
        return 0;
    else
        return 1;
    
}
