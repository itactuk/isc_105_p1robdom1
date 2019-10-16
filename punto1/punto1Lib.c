//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto1Lib.h"
#include <string.h>

/**
 * Invierte una cadena.
 * Dado: "Hola" debe de convertila en "aloH"
 * @param cadena
 */
void invierte (char cadena[]){

    int n = strlen(cadena);
    int i,j;
    char aux;
    for (i=0,j=n-1; i<n/2; i++,j--)
    {
        aux=cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=aux;
    }

    return;
}