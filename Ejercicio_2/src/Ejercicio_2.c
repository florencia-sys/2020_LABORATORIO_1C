/*
 ============================================================================
 Name        : Ejercicio_2.c
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
	char nombre;
	char sexo;
	int edad;
	int suma = 0;
	float promedio;
	int maximo;
	int minimo;
	char nombreMax;
	char nombreMin;
	int flag = 0;

	for (i = 0; i < 3; i++)
	{
		printf ("Ingrese nombre: \n");
		fflush(stdin);
		scanf ("%s", &nombre);

		printf ("Ingrese sexo: \n");
		fflush(stdin);
		scanf ("%c", &sexo);

		printf ("Ingrese edad: \n");
		fflush(stdin);
		scanf ("%d", &edad);


	if ( flag == 0 )
	{
		maximo = edad;
		minimo = edad;
		nombreMax = nombre;
		nombreMin = nombre;
		flag = 1;
	}
	else
	{
		if (edad > maximo)
		{
			maximo = edad;
			nombreMax = nombre;
		}
		if ( edad < minimo )
		{
			minimo = edad;
			nombreMin = nombre;
		}
	}

	}

	suma = suma + edad;
	promedio = (float)suma / 2;

	printf ("Suma: %d\n", suma);
	printf ("Promedio: %f\n", promedio);
	printf ("El mayor es %c\n", nombreMax);
	printf ("El menor es %c\n", nombreMin);

	return EXIT_SUCCESS;
}
