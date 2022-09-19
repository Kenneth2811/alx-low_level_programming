#include "main.h"

/**
*swap_int - swaps two integers' values
*@a: first integer
*@b: second int
*Return: ret 0
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
