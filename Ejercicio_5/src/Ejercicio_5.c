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

int main(void) {

	setbuf (stdout, NULL);

	int i;
	int j;
	int numeros[10];
	int maximo;
	int minimo;
	int igualesMax = 0;
	int igualesMin = 0;
	int especificos [100];

	for (i=0;i<5;i++)
	{
		printf("Ingrese un numero: ");
		fflush (stdin);
		scanf ("%d", &numeros[i]);
	}

	for (i=0;i<5;i++)
	{
			if (i == 0 || numeros[i] > maximo)
			{
				maximo = numeros[i];
			}
	}

	for (i=0;i<5;i++)
	{

		if (maximo == numeros[i])
		{
			igualesMax++;
		}
	}
		printf ("\nSe repiten %d veces el numero maximo\n", igualesMax);

	for (i=0;i<5;i++)
	{

		if (maximo == numeros[i])
		{
			igualesMax++;
		}
	}
		printf ("El maximo de los numeros ingresados es : %d\n", maximo);

	for (i=0;i<5;i++)
	{

		if (maximo == numeros[i])
		{
			igualesMax++;
			printf ("\nIndice: %d-\n", i);
		}
	}

	for (i=0;i<5;i++)
		{
			if ( i == 0 || numeros[i] < minimo)
			{
					minimo = numeros[i];
			}
		}

	for (i=0;i<5;i++)
	{

		if (minimo == numeros[i])
		{
			igualesMin++;
		}
	}
		printf ("\nSe repiten %d veces el numero minimo\n", igualesMin);


	for (i=0;i<5;i++)
	{

		if (minimo == numeros[i])
		{
			igualesMin++;
		}
	}
		printf ("\nEl minimo de los numeros ingresados es : %d\n", minimo);

	for (i=0;i<5;i++)
	{

		if (minimo == numeros[i])
		{
			igualesMin++;
			printf ("\nIndice: %d-\n", i);
		}
	}

	for (i=0;i<5;i++)
	{
		printf("%d\n", numeros[i]);
	}

	for (i=0;i<5;i++)
	{
		if (numeros[i] > 17 || numeros[i] < 3)
		{
			for (j=0;j<5;j++)
			especificos[j] = numeros[i];
			printf ("%d\n", especificos[j]);
		}
	}
		//printf ("%d\n", especificos[j]);
}
