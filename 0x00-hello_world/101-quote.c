#include<unistd.h>
/**
 * main - print text and gives a standart error
 *
 * Return: print error 1 (success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59)
	return (1);
}
