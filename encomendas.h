#ifndef ENCOMENDAS_H_INCLUDED
#define ENCOMENDAS_H_INCLUDED
#include "funcoes_auxiliares.h"

typedef struct{
    int num_registo;
    tipoData data;
    float peso;
    char estado;

}tipoEncomendas;

void inserirEncomenda();

#endif // ENCOMENDAS_H_INCLUDED
