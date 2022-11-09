//Construya un algoritmo tal, que dados los datos A,B,C y D que representan números enteros, escriba los mismos en orden inverso.
#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int a, b, c;
    printf("Ingrese los numeros a, b y c en ese orden: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Invertidos serían:\n%d, %d, %d\n\n", c, b, a);
    //system("pause");
    return 0;
}