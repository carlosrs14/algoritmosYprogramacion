//Calcule el aumento de sueldo para N empleados de una empresa, bajo el siguiente criterio
//si el sueldo es menor a $1000: aumenta 12%
//si el sueldo esta comprendido entre $1000 y $2500: aumenta 10%
//si el sueldo es mayor a $2500: aumenta 8%.
//Imprima el nuevo sueldo del trabajador y el monto total de la nomina considerando el aumento.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    float sueldo, nuevo_sueldo, nomina=0;
    printf("Empresa\nIngrese el número de trabajadores de la empresa: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Ingrese el sueldo del empleado #%d: ", i);
        scanf("%f", &sueldo);
        if(sueldo<1000){
            nuevo_sueldo=(float)sueldo+sueldo*12/1000;
            printf("El aumento fue de 12%%: %.2f\n\n", nuevo_sueldo);
        }
        else
            if(sueldo<2500){
                nuevo_sueldo=(float)sueldo+sueldo*10/1000;
                printf("El aumento fue de 10%%: %.2f\n\n", nuevo_sueldo);
            }
            else{
                nuevo_sueldo=(float)sueldo+sueldo*8/1000;
                printf("El aumento fue de 8%%: %.2f\n\n", nuevo_sueldo);

            }
        nomina+=nuevo_sueldo;
    }
    printf("La nueva nomina es de: %.2f\n\n", nomina);
    return 0;
}
