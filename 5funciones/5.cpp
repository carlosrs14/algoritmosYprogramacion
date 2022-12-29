//Crear un función que reciba un número real y devuelva un número entero con el valor:
//-1 si el número es negativo, 1 si el número es positivo o 0 si es cero.

#include <stdio.h>
#include <stdlib.h>

int signo(float);

int main(){
    int var;
    float numero;
    printf("Ingrese un número para ver si es negativo positivo o cero: ");
    scanf("%f", &numero);

    var = signo(numero);
    if(var==1)
        printf("El número %f es positivo", numero);
    else
        if(var==-1)
            printf("El número %f es negativo", numero);
        else
            printf("El número es 0");

    return 0;
}

int signo(float num){
    if(num<0)
        return -1;
    else
        if(num>0)
            return 1;
        else
            return 0;
}