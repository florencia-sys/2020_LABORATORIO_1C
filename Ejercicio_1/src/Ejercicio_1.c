/*
 ============================================================================
 Name        : Ejercicio_1.c
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

	int numero1;
	int numero2;
	int suma;
	int promedio;

	printf ("Ingrese un numero: \n");
	scanf ("%d", &numero1);

	printf ("Ingrese un numero: \n");
	scanf ("%d", &numero2);

	suma = numero1 + numero2;

	promedio = suma / 2;

	printf ("La suma de los numeros es: %d\n", suma);
	printf ("El promedio es: %d", promedio);

	return EXIT_SUCCESS;
}
