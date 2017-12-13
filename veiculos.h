#ifndef VEICULOS_H_INCLUDED
#define VEICULOS_H_INCLUDED
#include "funcoes_auxiliares.h"
#include "constantes.h"

typedef struct{
    char letras[MAX_STRING];
    int numeros;
}tipoMatricula;

typedef struct{
    tipoData data;
    tipoMatricula matricula;
    float carga;
    char estado;
}tipoVeiculos;

void inserirVeiculos (tipoVeiculos vVeiculos[MAX_VEICULOS]);
void consultarVeiculos(tipoVeiculos vVeiculos[MAX_VEICULOS], int numVeiculos);
#endif // VEICULOS_H_INCLUDED

