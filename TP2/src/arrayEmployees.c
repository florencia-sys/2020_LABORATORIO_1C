/*
 * Empleado.c
 *
 *  Created on: 14 may. 2020
 *      Author: flors
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayEmployees.h"
#include "utn.h"

#define NAME_ELEMENTS 51
#define LASTNAME_ELEMENTS 51

#define TRUE 1
#define FALSE 0

/** \brief  Indica que posicion del array esta libre,
 *  		esta funcion pone la bandera (isEmpty) en TRUE en todas
 * 			las posiciones del array.
 * \param list Employee* Puntero al array de Employees
 * \param len int Longitud del array
 * \return int Return (-1) si hay un Error [Longitud invalida o puntero NULL] - (0) si no hay Error * *
 *
 */
int printArray (Employee* list, int len)
{
	int retorno = -1;
	int i;

	if (list != NULL && len > 0)
	{
		for (i=0;i<len;i++)
		{
			if (list[i].isEmpty == 0)
			{
			retorno = 0;
			printf ("Id: %d - Nombre: %s - Apellido: %s - Salario: %f - Sector: %d", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);
			}
		}
	}
	return retorno;
}
/*
int printEmployee (Employee* pElement, int len)
{
	int retorno = -1;
	int i;

	if ( pElement != NULL && len > 0)
	{
		retorno = 0;
		printArray(&pElement[i]);
	}
	return retorno;
}*/

int initEmployees(Employee* list, int len)
{
	int retorno = -1;
	int i;

	if (list != NULL && len >= 0)
	{
		for (i=0;i<len;i++)
		{
		list[i].isEmpty = 1;
		}
		retorno = 0;
	}
	return retorno;
}

int findFree (Employee* list, int len)
{
	int index = -1;
	int i;

	for (i=0;i<len;i++)
	{
		if (list[i].isEmpty == 1)
		{
			index = i;
		}
	}
	return index;
}

int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
	int retorno = -1;
	Employee bufferEmployee;

	if (list != NULL && len > 0)
	{
		if (!utn_getNombre(bufferEmployee.name, NAME_ELEMENTS, "Nombre: \n", "ERROR", 2) &&
		!utn_getNombre(bufferEmployee.lastName, LASTNAME_ELEMENTS, "Apellido: \n", "ERROR", 2) &&
		!utn_getNumeroFlotante(&bufferEmployee.salary, "Salario: \n", "ERROR", 1, 100000, 2) &&
		!utn_getNumero(&bufferEmployee.sector, "Sector: \n", "ERROR", 1, 60, 2))
			{
				strncpy(list[id].name, name, NAME_ELEMENTS);
				strncpy(list[id].lastName, lastName, LASTNAME_ELEMENTS);
				list[id].salary = salary;
				list[id].sector = sector;
				list[id].isEmpty = 0;
				retorno = 0;
				list[id].id = id;
				list[id] = bufferEmployee;
				id++;
			}
	}
return retorno;
}

int findEmployeeById ( Employee* list, int len, int id)
{
	int index = -1;
	int i;

	for (i=0;i<len;i++)
	{
		if ( list[i].id == id )
		{
			index = i;
		}
	}
	return index;
}

