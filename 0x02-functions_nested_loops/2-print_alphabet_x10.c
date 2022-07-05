#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - Prints a-z 10 times using ASCII.
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			putchar(y);
		}
	putchar('\n');
	}
}
