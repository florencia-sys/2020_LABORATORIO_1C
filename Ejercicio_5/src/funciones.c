/*
 * funciones.c
 *
 *  Created on: 15 sep. 2020
 *      Author: flors
 */

#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void cargarArray(int numeros[], int len)
{
	int i;

	for (i=0;i<len;i++)
		{
			printf("Ingrese un numero: ");
			fflush (stdin);
			scanf ("%d", &numeros[i]);
		}
}

int maximoNumero(int numeros[], int len)
{
	int i;
	int maximo;

	for (i=0;i<len;i++)
		{
				if (i == 0 || numeros[i] > maximo)
				{
					maximo = numeros[i];
				}
		}
	return maximo;
}


int minimoNumero(int numeros[], int len)
{
	int i;
	int minimo;

	for (i=0;i<len;i++)
		{
				if (i == 0 || numeros[i] < minimo)
				{
					minimo = numeros[i];
				}
		}
	return minimo;
}

int ContarRepetidos(int numeros[], int len, int numero)
{
	int i;
	int iguales = 0;

	for (i=0;i<len;i++)
	{

		if (numero == numeros[i])
		{
			iguales++;
		}
	}
		return iguales;
}

void indiceMaximo(int numeros[], int len, int maximo)
{
	int i;
	int igualesMax;

	for (i=0;i<len;i++)
		{

			if (maximo == numeros[i])
			{
				igualesMax++;
				printf ("\nIndice: %d-\n", i);
			}
		}
}

void indiceMinimo(int numeros[], int len, int minimo)
{
	int i;
	int igualesMin;

	for (i=0;i<len;i++)
		{

			if (minimo == numeros[i])
			{
				igualesMin++;
				printf ("\nIndice: %d-\n", i);
			}
		}
}
