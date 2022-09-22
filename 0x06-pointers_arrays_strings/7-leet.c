#include "main.h"
/**
*leet - concatenates the string pointed to by @src to
*the end of the string pointed to by @dest
*@str: string to be concatenated upon
* Return: return pointer to @dest
*/
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}
	}
	return (str);
}
