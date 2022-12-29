//Crear una función que devuelva la primera letra de una cadena de texto.

#include <stdio.h>
#include <stdlib.h>

char primera_letra();

int main(){
    char letra = primera_letra();
    printf("La primera letra de la palabra ingresada fue: %c\n\n", letra);
    return 0;
}

char primera_letra(){
    char primera_letra, palabra[20];
    printf("Ingrese una palabra de menos de 20 letras: ");
    scanf("%s", &palabra);
    primera_letra= palabra[0];
    return primera_letra;
}