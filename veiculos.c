#include <stdlib.h>
#include <stdio.h>
#include "veiculos.h"
#include "funcoes_auxiliares.h"

void inserirVeiculos (tipoVeiculos vVeiculos[MAX_VEICULOS])
{
        tipoVeiculos veiculos;
//    char estado;
            printf("Data de Fabrico: ");
            veiculos.data=lerData();

            // printf("Matricula: ");
            // lerMatricula();



}



void consultarVeiculos(tipoVeiculos vVeiculos[MAX_VEICULOS], int numVeiculos)
{
    tipoData data;
    if(numVeiculos == 0){
        printf("Não há veiculos inseridos. Por favor, insira. ");
        inserirVeiculos(vVeiculos);
    }
    else{
    printf("\nData de fabrico: %d - %d - %d", data.ano, data.mes,data.dia);
    }






}


