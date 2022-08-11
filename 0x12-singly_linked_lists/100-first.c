#include <stdio.h>
#include "lists.h"

/**
 * printf - prints senntence.
 * first - function executed before main.
 * Return: n return.
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
