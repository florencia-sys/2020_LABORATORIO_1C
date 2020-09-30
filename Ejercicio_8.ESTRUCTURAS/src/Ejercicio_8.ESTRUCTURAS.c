/*
 ============================================================================
 Name        : ESTRUCTURAS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "cabeceras.h"
#define TAM 3

int main(void) {

	setbuf (stdout, NULL);

	eProducto producto;
	eProducto array[TAM];
	int i;

	for (i=0;i<TAM;i++)
	{
		printf("Ingrese producto: \n");
		fflush(stdin);
		gets(producto.nombre);
		printf("Ingrese descripcion: \n");
		fflush(stdin);
		gets(producto.descripcion);
		printf("Ingrese precio: \n");
		fflush(stdin);
		scanf("%f", &producto.precio);
	}

	for (i=0;i<TAM;i++)
	{
		printf("Producto: %s - Descripcion: %s - Precio: %.2f\n", producto.nombre, producto.descripcion, producto.precio);
	}

	for (i=0;i<TAM;i++)
	{
		printf("Producto: %s - Descripcion: %s - Precio: %.2f\n", array[i].nombre, array[i].descripcion, array[i].precio);
	}



	return EXIT_SUCCESS;
}
