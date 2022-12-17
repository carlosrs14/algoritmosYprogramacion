//Calcule el aumento de sueldo para un grupo de empleados  de una empresa, teniendo en cuenta el siguiente criterio;
//si el sueldo es inferior a $1000: aumenta 15%.
//Si el sueldo es mayor o igual a $1000: aumenta 12%
//Imprima el nuevo sueldo del trabajador y el total de nomina de la empresa, considerando este nuevo aumento.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int empleados, i;
    float nomina=0, sueldo, nuevo_sueldo;
    printf("Empresa\nIngrese el número de empleados: ");
    scanf("%d", &empleados);
    for(i=1; i<=empleados; i++){
        printf("Ingrese el sueldo del empleado #%d: ", i);
        scanf("%f", &sueldo);
        if(sueldo<1000){
            nuevo_sueldo=sueldo+sueldo*15/100;
            printf("Aumento de suledo del 15%%: %.2f\n\n", nuevo_sueldo);
        }
        else{
            nuevo_sueldo=sueldo+sueldo*12/100;
            printf("Aumento de suledo del 12%%: %.2f\n\n", nuevo_sueldo);
        }
        nomina+=nuevo_sueldo;
    }
    printf("La nueva nomina total es: %.2f\n\n", nomina);

    return 0;
}