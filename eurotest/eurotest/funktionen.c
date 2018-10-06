/*******************************************************************
// Programm    : Eurotest                                               
// Verfasser   : Schmidt                                             
// Datum       : Urprogramm: 21.11.2012                                           
// Aufgabe     : Pr�fung von Euro-Banknoten Seriennummern
// �nderungen  : 21.11.2012
*******************************************************************/

#include <stdio.h>  /* Standard Input/Output  z.B. scanf, printf */
#include <string.h>

#include "funktionen.h"



void strich (int n, char c) // gibt n mal das Zeichen c aus
{
	int i;
	for (i = 1; i <= n; i++)
		printf("%c", c);
	printf("\n");
}

unsigned int einlesen(char *inputArray)
{
	char inputBuffer[500];

	printf("Bitte geben sie die Banknoten Nummer ein: \n");
	scanf("%s", &inputBuffer);//copy into tmp Buffer so memory isn't killed

	//if strlen inputBuffer has the same length as inputArray 
	//		destination, source, number of characters to be copied
	strncpy(inputArray, inputBuffer, 12);
	
}

unsigned int quersumme(char *inputArray)
{
	int sum = 0;

	for (int counter = 0; counter < strlen(inputArray); counter++)
	{
		sum = (int)inputArray[counter] + sum;
	}

	return sum;
}

