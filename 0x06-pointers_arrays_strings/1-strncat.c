#include "main.h"
/**
 *_s *@dest: string that will be appendedhhhjjjjjjjjjjjjjjjjj
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
