//Construya un algoritmo  tal, que dado como dato la calificación de un alumno en un examen
//escriba “aprobado” si su calificación es mayor a 299 y “reprobado” en caso contrario.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota;
    printf("Ingrese la nota del estudiante del examen(0-500 valor entero): ");
    scanf("%d", &nota);
    
    if(nota>299)
        printf("Aprobado\n");
    else
        printf("Reprobado\n");

    return 0;
}
