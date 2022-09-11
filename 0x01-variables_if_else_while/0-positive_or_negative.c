#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints  a random number 
* and states whether it is positive, 
* negative or zero
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%ld is positive\n", n);
else if (n < 0)
	printf("%ld is negative\n", n);
else 
	printf("%ld is zero\n", n);

return (0);
}
