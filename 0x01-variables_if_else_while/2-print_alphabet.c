#include <stdio.h>
/**
* main - print alphabets from a to z
*
*Description: using the main function
* this program prints aphabets from a to z
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
