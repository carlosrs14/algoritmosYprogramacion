//Escriba un algoritmo  tal, que dado el nombre de un dinosaurio, su peso y longitud
//expresados estos dos últimos en pies y toneladas, respectivamente;
//escriba el nombre del dinosaurio, su peso expresado en kilogramos, y su longitud expresada en metros.
//(1 ton=1000 kilos,   1 pie=0,3047metros)

#include <stdio.h>
#include <stdlib.h>

int main(){

    float pesoton, longitudpie, pesokilo, longitudmetro;
    char nombre[20];
    printf("Ingresa el nombre del dinosaurio: ");
    scanf("%s", &nombre);
    printf("Ingresa su peso en toneladas: ");
    scanf("%f", &pesoton);
    printf("Ingresa su longitud en pies: ");
    scanf("%f", &longitudpie);
    pesokilo=pesoton*1000;
    longitudmetro=longitudpie*0.3047;

    printf("\n\nEl nombre del dinosaurio es: %s\n", nombre);
    printf("El peso en kilos del dinosaurio es: %.2f\n", pesokilo);
    printf("La longitud del dinosaurio en metros es: %.2f\n\n", longitudmetro);
    
    return 0;
}