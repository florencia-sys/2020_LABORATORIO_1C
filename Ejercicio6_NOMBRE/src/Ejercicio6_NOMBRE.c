/*
 ============================================================================
 Name        : Ejercicio6_NOMBRE.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 20

int main(void) {

	setbuf (stdout, NULL);

	char nombre [TAM];
	char apellido[TAM];
	char apellidoNombre[TAM];
	char buffer[100];
	int i;

	printf("Ingrese su nombre: \n");
	fflush(stdin);
	gets (buffer);

	while (strlen(buffer) > 19)
	{
		printf("Reingrese nombre: \n");
		fflush(stdin);
		gets(buffer);
	}
	strcpy(nombre, buffer);

	printf("Ingrese su apellido: \n");
	fflush(stdin);
	gets(apellido);

	strcpy(apellidoNombre, apellido);
	strcat(apellidoNombre, ", ");
	strcat(apellidoNombre, nombre);

	strlwr(apellidoNombre);

	apellidoNombre[0] = toupper(apellidoNombre[0]);

	for (i=0;i<strlen(apellidoNombre);i++)
	{
		if (isspace(apellidoNombre[i]))
		{
			apellidoNombre[i+1] = toupper(apellidoNombre[i+1]);
		}
	}

	puts(apellidoNombre);
}
