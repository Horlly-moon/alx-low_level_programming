#include <stdio.h>
#include "main.h"

/**
* main - This assigns a random number to the variable n 
* each time it is executed
* Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
