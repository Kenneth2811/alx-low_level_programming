#include "main.h"
/** 
 *_strncat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @desthhhhhhhhhhhhh
 *@dest: string that will be appendedhhhjjjjjjjjjjjjjjjjj
 *@src: string to be concatenated uponjjjjjjjjjjjjjjjjjjj
 *@n: string gggggggggggggggggggggggggggggggggggggggggggg
 *Return: return pointer to @dest
 */ 
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
