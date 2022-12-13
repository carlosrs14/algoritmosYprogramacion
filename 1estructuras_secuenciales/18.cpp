//Construya un algoritmo tal, que dados el radio de una esfera
//calcule e imprima el área y el volumen. 
//(Area=4*π*radio2    		volumen=4/3* π*radio3 )

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float radio, area, volmen;
    printf("Se calculará el area superficial y el volumen de una esfera\n");
    printf("Ingrese el radio de dicha esfera: ");
    scanf("%f", &radio);

    area= (float) 4*M_PI*radio*radio;
    volmen= (float) 4/3*M_PI*radio*radio*radio;
    printf("El volumen de dicha esfera es: %.2f y su area es: %.2f\n\n", volmen, area);
    return 0;
}