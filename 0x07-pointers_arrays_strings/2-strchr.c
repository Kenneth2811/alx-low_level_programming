#include "main.h"
#include <stdio.h>

/**
 *_strchr - locates a character in a string
 *@s: string to check the rff og thr eutyio
 *Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i)
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
