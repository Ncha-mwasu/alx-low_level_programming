#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
* main - Prints putchar with an underscore at the beginning.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, xy;

	xy = sizeof(str) / sizeof(int);
	for (count = 0; count < xy; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');
	return (0);
}

