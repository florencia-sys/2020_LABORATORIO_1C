/*
 ============================================================================
 Name        : EjercicioIntegrador.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 * Ejercicio 2:
 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu ppal.
 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 */


#include <stdio.h>
#include <stdlib.h>
#define MES 31

void imprimirArray(int dias[], int len);
void cargarArray(int dias[], int len);

int main(void) {

	setbuf (stdout, NULL);

	int opcion;
	int dias[MES];

	do
	{
		printf("1.IMPRIMIR ARRAY\n2.CARGAR ARRAY\n3.SALIR\n");
		printf ("Elije una opcion: ");
		scanf ("%d", &opcion);

		switch(opcion)
		{

		case 1:
			imprimirArray(dias, MES);
			break;
		case 2:
			cargarArray(dias, MES);
			break;
		}

	}while(opcion != 3);

}

void imprimirArray(int dias[], int len)
{
	int i;
	for (i=0;i<len;i++)
	{
		printf("Indice: %d - Valor de Temperatura: %d\n", i + 1, dias[i]);
	}
}

void cargarArray(int dias[], int len)
{
	int dia;
	float temp;

	printf ("Cargar un dia del mes 1/31: \n");
	scanf ("%d", &dia);
	printf ("Ingrese un valor de temperatura: \n");
	scanf ("%f", &temp);

	dias[dia - 1] = temp;

}
