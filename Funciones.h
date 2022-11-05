///Declaracion de funciones
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "jugadorUno.h"

void menu();
void posicionDeCursor(int posX, int posY, int &posCursor, int tecla);
void accionesCursor(int posCursor, int tecla, bool &salida, int tam,int vDados[], int vPJ[], int comoNoJug[], int puntaje[], int &jugador);
void mostrarTexto(const char* text, int posX, int posY);
void pedirNombres(char nombre[]);
int cantidadDeRondas();
void cargarDados(int vDados[], int tam);
void mostrarArray(int vDados[], int posX, int posY);
void comienzo(int vDados[], int tam, int cantRondas, int vPJ[], int comoNoJug[], int puntaje[], int &jugador);
void posibleCombinacion(int vDados[],int tam, int vPJ[], int puntaje[], int &jugador);
int jugadaAlNumero(int vDados[],int eleccion );
void ordenarDeMenorAMayor(int vDados[], int tam);
int escalera(int vDados[], int tam, int puntaje[], int &jugador);
int armadoDeJuegos(int vDados[], int tam, int puntaje[], int &jugador);
void ponerEnCero(int vDados[], int tam);
void ponerEnUno(int vDados[], int tam );
void hayOnoJugada(int vPJ[], int comoNoJug[], int vDados[], int puntaje[], int &jugador);
void elegirJugada(int vPJ[],int comoNoJug[],int vDados[], int puntaje[], int &jugador);
void CancelarJugada(int comoNoJug[]);
void tirarDados(int vDados[],int tam);
void volverAtirar(int vDados[],int tam, int vPJ[], int comoNoJug[], int puntaje[], int &jugador);
void cambiarDados(int vDados[]);
void menuElegirJugada(int vPJ[],int comNoJug[]);
void mostrarPuntaje(int puntaje[], int &jugador);

#endif // FUNCIONES_H_INCLUDED
