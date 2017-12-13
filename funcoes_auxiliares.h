#ifndef FUNCOES_AUXILIARES_H_INCLUDED
#define FUNCOES_AUXILIARES_H_INCLUDED

typedef struct{
    int dia, mes, ano;
}tipoData;



tipoData lerData();
void limpaBufferStdin();
int lerNumero(int minimo, int maximo);
char lerEstado;



#endif // FUNCOES_AUXILIARES_H_INCLUDED
