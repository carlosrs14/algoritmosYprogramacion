//escriba un algoritmo  tal, que dado
//el peso, la estatura y el sexo  de N personas que pertenecen a un departamento de Colombia;
//obtenga el promedio del peso de la  población femenina y  promedio de la estatura de la masculina.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, genero, cont_mas=0, cont_fem=0;
    float peso, estatura, promedio_peso_fem, promedio_estatura_mas, suma_mas=0, suma_fem=0;

    printf("Estaturas y pesos\n");
    printf("Ingrese el número de personas: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("\nPersona #%d\n", i);
        printf("Genero:\n1-hombre\n2-mujer\n");
        scanf("%d", &genero);
        if(genero==1){
            cont_mas++;
            printf("Ingrese el peso: ");
            scanf("%f", &peso);
            printf("Ingrese la estatura: ");
            scanf("%f", &estatura);
            suma_mas+=estatura;
        }else
            if(genero==2){
            cont_fem++;
            printf("Ingrese el peso: ");
            scanf("%f", &peso);
            printf("Ingrese la estatura: ");
            scanf("%f", &estatura);
            suma_fem+=peso;
            }else{
                printf("*Opción invalida*\n");
                i--;
            }

    }
    promedio_estatura_mas=(float)suma_mas/cont_mas;
    promedio_peso_fem=(float) suma_fem/cont_fem;
    printf("\n\nEl promedio de la estatura en los hombres es: %.2f\n", promedio_estatura_mas);
    printf("El promedio del peso femenino es: %.2f\n", promedio_peso_fem);


    return 0;
}