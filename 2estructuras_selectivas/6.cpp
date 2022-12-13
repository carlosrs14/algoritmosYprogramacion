//Construya un algoritmo  tal, que dado como dato el sueldo de un trabajador
//le aplique un aumento del 15% si su sueldo es inferior a $10000 y 12% en caso contrario
//Imprima el nuevo sueldo del trabajador.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float sueldo, nuevo_sueldo;

    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if(sueldo<10000){
        nuevo_sueldo= (float) sueldo+ sueldo*15/100;
        printf("Se le aplicó un aumento del 15%%");  
    }else{
        nuevo_sueldo = (float) sueldo + sueldo*12/100;
        printf("Se le aplicó un aumento del 12%%");
    }
    printf("\nEl nuevo sueldo del trabajador es: %.2f\n\n", nuevo_sueldo);

    return 0;
}