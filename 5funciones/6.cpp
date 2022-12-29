//Crear una función  Que permita leer el valor correspondiente a una distancia en millas 
//y las visualice expresadas en metros. Sabiendo que 1 milla marina equivale a 1852 metros.

#include <stdio.h>
#include <stdlib.h>

void millas_metros(float);

int main(){
    float millas;
    printf("Ingrese un valor en millas para representarlo en metros: ");
    scanf("%f", &millas);
    millas_metros(millas);
    return 0;
}

void millas_metros(float millas){
    float metros = millas*1852;
    printf("%.2f en milllas equivale a %.2f en metros\n\n", millas, metros);
}