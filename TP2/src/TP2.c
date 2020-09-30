/*
 ============================================================================
 Name        : TP2.c
 Author      : Florencia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrayEmployees.h"
#include "utn.h"

#define NAME_ELEMENTS 51
#define LASTNAME_ELEMENTS 51
#define ELEMENTS 1000

int main(void) {

	setbuf (stdout, NULL);

	Employee arrayEmployees[ELEMENTS];
	int opcion;
	int idEmployee = 0;
	char name[NAME_ELEMENTS];
	char lastName [LASTNAME_ELEMENTS];
	float salary;
	int sector;
	int p;
	int id;
	int buscarLibre;

	if (!initEmployees (arrayEmployees, ELEMENTS))
	{
		printf("INICIALIZACION OK\n");
	}
	do
	{
		utn_getNumero(&opcion, 	"\n1.ALTA\n"
								"2.MODIFICAR\n"
								"3.BAJA\n"
								"4.INFORMAR\n"
								"5.SALIR\n"
								"Eliga una opcion: \n", "ERROR", 1, 5, 2);

		switch(opcion)
		{
		case 1:
			addEmployee(arrayEmployees, ELEMENTS, idEmployee, name, lastName, salary, sector);
			break;
		case 2:
			utn_getNumero(&idEmployee, "Ingrese el ID a modificar: \n", "ERROR", 1, 5, 2);
			p = findEmployeeById ( arrayEmployees, ELEMENTS, idEmployee);
			addEmployee(arrayEmployees, ELEMENTS, p, name, lastName, salary, sector);
			break;
		case 3:
			printArray (arrayEmployees, ELEMENTS);
			break;


		}
	}while( opcion != 5);
	return EXIT_SUCCESS;
}
