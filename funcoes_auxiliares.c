#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcoes_auxiliares.h"
#include "veiculos.h"
#include "constantes.h"

int lerNumero (int minimo, int maximo)
{

    int numero, val;
    do
    {
        val = scanf ("%d", &numero); /*val é uma variável que "vê"/valida quantos numeros sao inseridos no scanf*/
        limpaBufferStdin();

        if(val == 0) /*se não forem inseridos valores no scanf*/
        {
            printf("Por favor, insira um numero inteiro.");
        }
        else
        {
            if(numero<minimo || numero>maximo) /*se o numero for menor que o min e maior que o max*/
            {
                printf("Numero Invalido. Por favor, insira um valido: ");
            }
        }
    }
    while (numero<minimo || numero>maximo || val==0);
    return numero;
}

tipoData lerData ()
{

    tipoData data;
    int maximoDias;

    printf("Ano: ");
    data.ano = lerNumero(MIN_ANO, MAX_ANO);
    printf("\t\t Mes: ");
    data.mes = lerNumero(MIN_MES, MAX_MES);
    switch(data.mes)
    {
    case 2:
        if (data.ano%4==0 && data.ano%400==0)
        {
            maximoDias=29;
        }
        else
        {
            maximoDias=28;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maximoDias=30;
        break;
    default:
        maximoDias=31;
        break;
    }
    printf("\t\t Dia: ");
    data.dia = lerNumero(1, maximoDias);

    return data;
}

void limpaBufferStdin(void)
{
    int lixo;
    do
    {
        lixo = getchar();
    }
    while (lixo != '\n' && lixo != EOF);
}


/*char lerEstado(){
    printf("\n\tD - Disponivel");
    printf("\n\tC - Em carga");
    printf("\n\tT - A transportar");
    printf("\n\tR - De regresso");
    printf("\n\tA - Avariado");
    scanf(" %c", &estado);
    switch(estado){
        case 'D':
        printf("O veiculo encontra-se disponivel");
        case 'C':
        printf("O veiculo")




    }
}

tipoMatricula lerMatricula ()
{
    tipoMatricula matricula;
    tipoData data;

    if (data.ano>=1937 || data.ano<=1992)
    {
        printf("\nInsira a matricula do tipo XX-00-00: ");

    }
    if (data.ano>=1992 || data.ano<=2005)
    {
        printf("\nInsira a matricula do tipo 00-00-XX: ");
    }
    if (data.ano>=2005 || data.ano<=2017)
    {
        printf("\nInsira a matricula do tipo 00-XX-00: ");
    }

    return matricula;
}
*/
