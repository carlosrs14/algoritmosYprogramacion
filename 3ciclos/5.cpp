//Construya un algoritmo tal, que calcule e imprima  la suma de los N primeros números naturales.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, suma=0, n;
    printf("Suma de los primeros n número\n");
    printf("Ingresa el número n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        suma+=i;
    
    printf("La suma de los primeros n números fue: %d\n", suma);
    //system("pause");
    return 0;
}