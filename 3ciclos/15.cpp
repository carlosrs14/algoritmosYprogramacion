//Dado el sueldo de 38 trabajadores, considere un aumento del 15% a cada uno de ellos, si su sueldo es inferior a $800.
//Imprima el sueldo con el aumento  incorporado (si corresponde).

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float sueldo, nuevo_sueldo;
    printf("Ingrese el sueldo de 10 trabajadores y si es menor a 800, tendrá un aumento de 15%%\n");
    for(i=1; i<=10; i++){
        printf("Ingrese el sueldo del trabajador número %d: ", i);
        scanf("%f", &sueldo);
        if(sueldo<800){
            nuevo_sueldo=(float) sueldo + sueldo *15/100;
            printf("Sueldo aumentado: %.2f\n", nuevo_sueldo);
        }else{
            printf("Sueldo NO aumentado: %.2f\n", sueldo);
        }
    }
    printf("\n\n\n");
    return 0;
}
