//Construya un algoritmo tal, que dado el perímetro de la base, la apotema y la altura de un prisma pentagonal
//calcule el área de la base, el área lateral, el área total y el volumen.
//(A.base= per*apo/2             A.lateral= per*alt            A.total= 2*ab+al  volumen=ab*al)

#include <stdio.h>
#include <stdlib.h>

int main(){
    float perimetro_base, apotema, altura, area_base, area_lateral, area_total, volumen;
    printf("Prisma pentagonal\n");
    printf("Ingrese el perimetro de la base: ");
    scanf("%f", &perimetro_base);
    printf("Ingrese la apotema: ");
    scanf("%f", &apotema);
    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    area_base=(float)perimetro_base*apotema/2;
    area_lateral=(float)perimetro_base*altura;
    area_total=(float)2*(area_base+altura);
    volumen= (float) area_base*altura;

    printf("El area de la base es: %.2f\n", area_base);
    printf("El area lateral es: %.2f\n", area_lateral);
    printf("El area total es: %.2f\n", area_total);
    printf("El volumen es: %.2f\n", volumen);

    return 0;
}