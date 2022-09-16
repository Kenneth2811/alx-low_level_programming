#include <stdio.h>
#include "main.h"

/**
*print_numbers - function that print all numbers from
*0 t0 9 when the program runs from the terminal
*
*Return: returns nothing
*/

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
