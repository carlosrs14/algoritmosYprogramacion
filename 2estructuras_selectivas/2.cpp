//Dado como dato el sueldo de un trabajador, aplíquele un aumento del 15%  si su sueldo es inferior a $100000
//Imprima en este caso, el nuevo sueldo del trabajador. Haga el algoritmo correspondiente.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float sueldo, nuevo_sueldo;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    if(sueldo<100000){
        nuevo_sueldo = (float)sueldo + sueldo*15/100;
        printf("El nuevo sueldo es: %.2f\n\n", nuevo_sueldo);
    }else
        printf("No se ha aplicado un descuento\n\n");
    return 0;
}