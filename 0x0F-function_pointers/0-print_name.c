#include <stdio.h>

/**
 *print_name - prints a name.
 *@name: pointer to name.
 *@f: function pointer that does the bintkilo
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
