//Construya un algoritmo tal que  dadas las coordenadas de los puntos P1(x1,y1),  P2(x2,y2)  y P3(x3,y3),
//que corresponden  a  los  vértices  de   un triangulo, calcule su perímetro
//(per=lado1+lado2+lado3)   lado1=√(X1-X2)2+(Y1-Y2)2 lado2=√(X1-X3)2+(Y1-Y3)2 lado3=√(X3-X2)2+(Y3-Y2)2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float perimetro, x1, x2, x3, y1, y2, y3, lado1, lado2, lado3;
    printf("Digitará 3 puntos del plano y se calculará:\n");
    printf("La longitud de los lados y el perimetro\n");
    printf("Digite el punto 1(x,y):");
    scanf("%f %f", &x1, &y1);
    printf("Digite el punto 2(x,y):");
    scanf("%f %f", &x2, &y2);
    printf("Digite el punto 3(x,y):");
    scanf("%f %f", &x3, &y3);

    lado1=(float)sqrt(pow(x1-x2, 2) + pow(y1-y2,2));
    lado2=(float)sqrt(pow(x1-x3, 2) + pow(y1-y3,2));
    lado3=(float)sqrt(pow(x2-x3, 2) + pow(y2-y3,2));
    perimetro=lado1+lado2+lado3;

    printf("Los lados del triangulo miden %.2f, %.2f y %.2f\n", lado1, lado2, lado3);
    printf("Y el perimetro mide: %.2f\n\n", perimetro);
    return 0;
}