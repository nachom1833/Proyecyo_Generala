///Prototipos de funciones
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "jugadorUno.h"

void menu();
void pedirNombres(char nombre[]);
void cargarDados(int vDadosAzar[]);
void mostrarDados(int vDadosAzar[]);
void comienzo(char nombre[], int vDados[], int tam);
int jugadaAlNumero(int vDados[]);
void ordenarDeMenorAMayor(int vDados[], int tam);
bool escalera(int vDados[]);
void ponerEnCero(int Array[]);



#endif // FUNCIONES_H_INCLUDED
