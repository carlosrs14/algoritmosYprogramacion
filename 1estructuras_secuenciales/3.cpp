// Dado el nombre y 5 calificaciones de un alumno, obtenidas a lo largo del semestre; construya un algoritmo que
// imprima el nombre del alumno y el promedio  de sus calificaciones.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1, n2, n3, n4;
    float promedio;
    char nombre[15];
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", &nombre);
    printf("Ingrese las 4 notas del alumno: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    promedio = (float)(n1 + n2 + n3 + n4) / 4;
    printf("El promedio de las notas de %s ", nombre);
    printf("es: %.2f\n\n", promedio);
    // system("pause");
    return 0;
}
