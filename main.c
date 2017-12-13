#include <stdio.h>
#include <stdlib.h>
#include "funcoes_auxiliares.h"
#include "veiculos.h"
#include "constantes.h"

int main()
{
    tipoVeiculos vVeiculos[MAX_VEICULOS];
   // tipoMatricula matricula[MAX_MATRICULA];
    int numVeiculos = 0;
    /*menu principal*/
    int opcao, opcaoVeiculos;
    opcaoVeiculos = 0;
    opcao = 0;
    printf("\t\tMenu Principal: Distribuicao de encomendas");
    printf("\n\n\t1-Veiculos");
    printf("\n\t2-Encomendas");
    printf("\nOpcao-> ");
    scanf("%d", &opcao);
    switch(opcao)
    {
        /*Sub-Menu*/

        case 1:
            printf("\n\t\t1-Inserir veiculo(s)");
            printf("\n\t\t2-Consultar veiculos");
            printf("\n\t\t3-Listar veiculos");
            printf("\n\tOpcao-> ");
            scanf("%d", &opcaoVeiculos);
            switch(opcaoVeiculos)
            {
            case 1:
                printf("\n\t\t\t Inserir Veiculo(s)");
                inserirVeiculos( vVeiculos);
                numVeiculos++;
                break;
            case 2:
                printf("\n\t\t\t Consulta de Veiculos");
                consultarVeiculos(vVeiculos, numVeiculos);
                break;
            case 3:
                printf("\n\t\t\t Listar veiculos");
                break;
            default:
                printf("Opcao invalida. Por favor, insira uma opcao valida.");
            }
            break;
        case 2:
            printf("\n\t\t\t");
            break;
        default:
            printf("Opcao invalida. Por favor, insira uma opcao valida");
            break;
    }
    return 0;
}
