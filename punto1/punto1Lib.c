//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto1Lib.h"
#include <stdio.h>

/**
 * Invierte una cadena.
 * Dado: "Hola" debe de convertila en "aloH"
 * @param cadena
 */
void invierte (char cadena[]){

    int n = sizeof(cadena);
    int i,j = n-1;
    char aux;
    for(i=0;i<j/2;i++){
        aux = cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=aux;
        j--
    }
    return;
}