//
// Created by Jair on 15/12/21.
//

#ifndef USOPILAS_EDPILA_H
#define USOPILAS_EDPILA_H
#include <stdlib.h>
#include <memory.h>

typedef struct TNodoPila{
    void* Elem;
    struct TNodoPila *Siguiente;
} TNodoPila;

typedef struct
{
    TNodoPila *Tope;
    int TamanioDato;
} TPila;


void CrearPila(TPila *pP, int TamanioDato)
{
    pP->Tope = NULL;
    pP->TamanioDato = TamanioDato;
}

int PilaVacia(TPila P)
{
    return (P.Tope==NULL);
}

int Apilar(TPila *pP, void* pE)
{
    TNodoPila *pNodo = (TNodoPila*) malloc(sizeof(TNodoPila));
    if (!pNodo)
        return 0;
    else
    {
        pNodo->Siguiente = pP->Tope;
        pP->Tope = pNodo;
        pNodo->Elem = malloc (pP->TamanioDato);
        memcpy(pNodo->Elem, pE, pP->TamanioDato);
        return 1;
    }
}

int Desapilar(TPila *pP, void* pE)
{
    TNodoPila *pAux = pP->Tope;
    pP->Tope = pP->Tope->Siguiente;
    memcpy(pE, pAux->Elem, pP->TamanioDato);
    free(pAux->Elem);
    free(pAux);
    return 1;
}

#endif //USOPILAS_EDPILA_H
