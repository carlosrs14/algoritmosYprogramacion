//Realiza un programa que calcule las potencias de la 2 a la 10 del número PI y la raíz cuadrada de dicha potencia. 
//Para ello construye una función que calcule la potencia n-ésima de un número cualquiera y
//utiliza después la función sqrt de la librería matemática de C.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float potencia(float, int);

int main(){
    int i;
    for(i=2; i<=10; i++){
        printf("%d) %f\n", i,sqrt(potencia(M_PI , i)));
    }
    return 0;
}

float potencia(float base, int exponente){
    int i;
    float resultado=M_PI;
    if(exponente==0){
        return 1;
    }else 
        if(exponente==1){
            return M_PI;
        }
    for(i=1; i<exponente; i++){
        resultado*=M_PI;
    }
    //printf("%f", resultado);
    return resultado;
}