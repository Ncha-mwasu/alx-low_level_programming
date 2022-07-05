#include "main.h"

/**
* main - Prints the alphabet a-z using ASCII
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	return (0);
}
