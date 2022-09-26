#include "main.h"
#include <stdio.h>

/**
 *_memset - fills a memory block with a constant byterrrrrrrrrrrrrrrrr 
 *@b: char to be usedhhhhhhhhhhhhhhhhhhhhfffffffffff
 *@n: number of bytes to be usednmfkglglgifhjfkf
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
