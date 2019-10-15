//
// Created by Ivan's PC on 10/13/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "punto1Lib.h"

int main(){

    char cadena[]={'a', 'b', 'c', '\0'};

    invierte(cadena);

    printf("Cadena invertida: \n\n");
    puts(cadena);
    return 0;
}