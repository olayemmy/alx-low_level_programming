#include "main.h"

/**
 * print_most_numbers - Prints 0-9 leaving out 2 and 4.
 *
 * Return: 0-9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
