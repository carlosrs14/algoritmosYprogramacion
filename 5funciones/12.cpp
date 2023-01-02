//Crear una función que reciba como parámetro un numero entero y escriba la tabla de multiplicar de ese número
//(por ejemplo: para el 3 deberá llegar desde 3x0=0 hasta 3x10=30)

#include <stdio.h>
#include <stdlib.h>

void tablas(int);

int main(){
    int num;

    printf("Tablas de multiplicar\nIngrese un número: ");
    scanf("%d", &num);
    tablas(num);
    return 0;
}

void tablas(int numero){
    int i;
    for(i=0; i<=10; i++)
        printf("%d X %d = %d\n", numero, i, numero*i);    
}
