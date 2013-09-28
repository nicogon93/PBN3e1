//
//  main.h
//  PBNP2E1
//
//  Created by Nicolas Gonzalez on 26/09/13.
//  Copyright (c) 2013 Nicolas Gonzalez. All rights reserved.
//

#ifndef PBNP2E1_lista_h
#define PBNP2E1_lista_h

#define MAX_INTEGER 65536;

struct Nodo{
    int numero;
    struct Nodo *ptr_siguiente;
};

typedef struct Nodo nodo;

struct Lista{
    nodo primero, ultimo;
    int largo;
};

typedef struct Lista * lista;

lista crear_lista();
void insertar(lista L, int valor);
int is_empty(lista L);
void imprimir_lista(lista L);


#endif
