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

	for (i = 0; i < 10; i++)
	{
		printf ("Ingrese nombre: \n");
		scanf ("%c", &nombre);
		fflush(stdin);
		printf ("Ingrese sexo: \n");
		scanf ("%c", &sexo);
		fflush(stdin);
		printf ("Ingrese edad: \n");
		scanf ("%d", &edad);
		fflush(stdin);

	suma = suma + edad;
	promedio = (float)suma / 2;

	}

	printf ("Suma: %d\n", suma);
	printf ("Promedio: %f", promedio);

	return EXIT_SUCCESS;
}
