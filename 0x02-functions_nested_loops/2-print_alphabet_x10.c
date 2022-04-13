#include "main.h"

/**
 * print_alphabet_10x - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_10x(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

		i++;
	}
}
