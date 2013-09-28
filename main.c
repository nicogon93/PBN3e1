//
//  main.c
//  PBNP2E1
//
//  Created by Nicolas Gonzalez on 26/09/13.
//  Copyright (c) 2013 Nicolas Gonzalez. All rights reserved.
//

#include <stdio.h>
#include "lista.c"

int main(int argc, const char * argv[]){
    int cant, contador = 0;
    int entrada;
    lista L = crear_lista();
    printf("indicar la cantidad de objetos\n");
    scanf("%d",&entrada);
    cant = entrada;
    while(contador != cant){
        insertar(L, entrada); //ascii a decimal
        scanf("%d",&entrada);
        contador++;
    }
    imprimir_lista(L);
    return 0;
}

