//
//  lista.c
//  PBNP2E1
//
//  Created by Nicolas Gonzalez on 26/09/13.
//  Copyright (c) 2013 Nicolas Gonzalez. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

lista crear_lista(){
    lista L = (lista)malloc(sizeof(struct Lista));
    L->largo = 0;
    return L;
}

void insertar(lista L , int valor){
    nodo *n = malloc(sizeof(nodo));
    n->numero = valor;
    n->ptr_siguiente = NULL;
    if (is_empty(L)) {
        L->primero = *n;
        L->largo += 1;
    }
    else{
        L->ultimo.ptr_siguiente = n;
        L->ultimo = *n;
        L->largo += 1;
    }
}

int is_empty(lista L){
    if (L->largo == 0) {
        return 0;
    }
    else{
        return 1;
    }
}

void imprimir_lista(lista L){
    int max = 0;
    int min = MAX_INTEGER;
    if (!is_empty(L)) {
        nodo *n = &L->primero;
        while (n->ptr_siguiente != NULL) {
            if (max < n->numero) {
                max = n->numero;
            }
            if (min > n->numero) {
                min = n->numero;
            }
            printf("%d", n->numero);
            n = n->ptr_siguiente;
        }
        
    }
    printf("NULL");
    
}