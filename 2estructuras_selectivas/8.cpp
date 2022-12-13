//Construya un algoritmo  tal, que dados como datos  el código y 5 calificaciones de un alumno
//imprima el código, el promedio y la palabra “Aprobado” si el alumno tiene un promedio mayor o igual que 300,
//las palabras “No Aprobado” en caso contrario.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota1, nota2, nota3, nota4, nota5, codigo;
    float promedio;
    printf("Promedio de notas de un estudiante(0-500)\n");
    printf("Ingrese el codigo del estudiante: ");
    scanf("%d", &codigo);
    printf("Ingrese la nota 1 del estudiante: ");
    scanf("%d", &nota1);
    printf("Ingrese la nota 2 del estudiante: ");
    scanf("%d", &nota2);
    printf("Ingrese la nota 3 del estudiante: ");
    scanf("%d", &nota3);
    printf("Ingrese la nota 4 del estudiante: ");
    scanf("%d", &nota4);
    printf("Ingrese la nota 5 del estudiante: ");
    scanf("%d", &nota5);

    promedio= (float)(nota1+nota2+nota3+nota4+nota5)/5;
    if(promedio>=300){
        printf("\n\nEl estudiante con el codigo: %d\n", codigo);
        printf("Sacó un promedio de: %.2f\n", promedio);
        printf("Y aprobó el curso\n");
    }else{
        printf("\n\nEl estudiante con el codigo: %d\n", codigo);
        printf("Sacó un promedio de: %.2f\n", promedio);
        printf("Y reprobó el curso\n");
    }
    return 0;
}