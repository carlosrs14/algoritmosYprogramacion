//Construya un algoritmo tal, que dados como datos los sueldos de 5 empleados de una empresa, obtenga el total de la nomina.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, sueldo, nomina=0;

    printf("Nomina total de la empresa\n\n");

    for(i=1; i<=5; i++){
        printf("Ingresa el sueldo del empleado numero %d: ", i);
        scanf("%d", &sueldo);
        nomina+=sueldo;
    }

    printf("La nomina de la empresa es: %d\n\n", nomina);
    //system("pause");
    return 0;
}