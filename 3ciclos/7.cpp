//Construya un programa en C++ tal, que dados como datos  N números enteros
//obtenga la suma de los números impares y el promedio de los números pares.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, numero,contpar=0, sumapar=0, sumaimpar=0, n;
    float promediopar;
    printf("Cuantos números ingreesarás? ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("#%d: ", i);
        scanf("%d", &numero);
        if(numero%2==0){
            contpar++;
            sumapar+=numero;

        }else
            sumaimpar+=numero;
    }
    promediopar=(float) sumapar/contpar; 
    printf("El promedio de los pares fue: %.2f\n", promediopar);
    printf("La suma de los impares fue: %d\n\n", sumaimpar);
    //system("pause");
    return 0;
}