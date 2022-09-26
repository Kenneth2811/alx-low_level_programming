#include "main.h"
#include <stdio.h>

/**
 *_memset - fills a memory block with a constant byte
 *@s: address to memory block of the same work in the
 *@b: char to be used tp make the program run by itse
 *@n: number of bytes to be used make the program run
 *Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
