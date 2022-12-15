//Construya un algoritmo  tal, que dado como dato el sueldo de un trabajador
//calcule su aumento según el siguiente criterio:
//Sueldo < $1000 --->  aumento 25%,     $1000 <=Sueldo <= $1500 --->  aumento 21%,   Sueldo > $1500 --->  aumento 18%
//imprima el nuevo sueldo del trabajador.

#include <stdlib.h>
#include <stdio.h>

int main(){
    float sueldo, nuevo_sueldo;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo<1000)
        nuevo_sueldo=(float) sueldo+sueldo*25/100;
    else
        if(sueldo<=1500 && sueldo>=1000){
            nuevo_sueldo= sueldo+sueldo*21/100;
        }else
            nuevo_sueldo=sueldo+ sueldo*18/100;
    
    printf("El nuevo sueldo del trabajador es: %.2f\n\n", nuevo_sueldo);
    return 0;
}