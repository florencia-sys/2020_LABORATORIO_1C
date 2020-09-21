/*
 ============================================================================
 Name        : Ejercicio_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"
#define T 5

int main(void) {

	setbuf (stdout, NULL);

	int numeros[T];
	int maximo;
	int minimo;
	int repeticionesMax;
	int repeticionesMin;

	cargarArray(numeros, T);
	maximo = maximoNumero(numeros, T);
	minimo = minimoNumero(numeros, T);
	printf ("El numero maximo ingresado es %d\n", maximo);
	printf ("El numero minimo ingresado es %d\n", minimo);
	repeticionesMax = ContarRepetidos(numeros, T, maximo);
	printf ("\nSe repiten %d veces el numero maximo\n", repeticionesMax);
	indiceMaximo(numeros, T, maximo);
	repeticionesMin = ContarRepetidos(numeros, T, minimo);
	printf ("\nSe repiten %d veces el numero minimo\n", repeticionesMin);
	indiceMinimo(numeros, T, minimo);
}
