//En las olimpiadas de invierno el tiempo que realizan los participantes en la competencia de velocidad en pista
//se mide en minutos, segundos y centésimas. La distancia que recorren, por otra parte, se expresa en metros.
//Construya un algoritmo que calcule la velocidad de los participantes, en kilómetros por hora, de las diferentes competencias.
 
#include <stdio.h>
#include <stdlib.h>

int main(){

    int segundos, minutos, horas, tiempo_seg;
    float velocidad, tiempo_hora, recorrido_metros, recorrido_km;
    printf("Calculando la velocidad de un corredor en la maratón\n");
    printf("Ingrese las horas, minutos y minutos que tardó: ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("Ingrese la cantidad de metros recorridos: ");
    scanf("%f", &recorrido_metros);

    tiempo_seg= segundos + minutos*60 + horas*3600;
    tiempo_hora= (float) tiempo_seg/3600;
    recorrido_km=(float) recorrido_metros/1000;
    velocidad = (float)recorrido_km/tiempo_hora;

    printf("La velocidad media de este participante fue: %.2f kmph\n\n", velocidad);
    return 0;
}