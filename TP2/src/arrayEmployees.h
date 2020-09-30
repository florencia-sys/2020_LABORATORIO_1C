/*
 * Empleado.h
 *
 *  Created on: 14 may. 2020
 *      Author: flors
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct{
	int id;
	char name [51];
	char lastName [51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

int printArray (Employee* pArray, int len);
//int printEmployee (Employee* pElement, int len);
int initEmployees(Employee* pArray, int len);
int findFree (Employee* pArray, int len);
int findEmployeeById ( Employee* list, int len, int id);
int addEmployee(Employee* pArray, int len, int id, char name[],char lastName[],float salary,int sector);

#endif /* ARRAYEMPLOYEES_H_ */
