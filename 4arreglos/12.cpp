//Diseñe un algoritmo y programa que almacene en un vector llamado FIB[100]
//los 100 primeros números de la serie fibonacci.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    long num1=0, num2=1, num3, FIB[101]={0,1}; 

    for(i=2; i<101; i++){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        FIB[i]=num3;
    }
    printf("Los primeros 100 n de la serie fibonacci son:\n\n");
    for(i=0; i<101; i++){
        printf("F %d)  %ld\n",i, FIB[i]);
    }
    printf("\n\nDesde el F) 93 en adelante arroja valores erroneos\n\n");
    //system("pause");
    return 0;
}