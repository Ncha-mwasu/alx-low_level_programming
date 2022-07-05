#include "main.h"

/**
 * main - Prints a-z 10 times using ASCII.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			putchar(y);
		}
	putchar('\n');
	}
}
