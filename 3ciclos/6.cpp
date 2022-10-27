//Se tienen las calificaciones de un grupo de  alumnos  que presentaron un examen.
//El profesor desea obtener el promedio de estas calificaciones. Escriba un algoritmo para resolver lo planteado anteriormente.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, nota, suma=0, n;
    float promedio;
    printf("Promedio de calificaciones\n");
    printf("Ingresa el número de notas: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Ingresa la nota #%d: ", i);
        scanf("%d", &nota);
        suma+=nota;
    }
    promedio=(float) suma/n; 
    printf("El promedio de las notas fue: %.2f\n", promedio);
    //system("pause");
    return 0;
}