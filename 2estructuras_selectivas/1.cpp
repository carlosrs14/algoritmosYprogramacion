//Construya un algoritmo  tal, que dado como dato la calificación de un alumno en un examen
//escriba “aprobado” en caso de que esa calificación fuese mayor  o igual de 300.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota;
    printf("Ingrese la nota del estudiante del examen(0-500 valor entero): ");
    scanf("%d", &nota);
    
    if(nota>=300)
        printf("Aprobado\n");
    return 0;
}
