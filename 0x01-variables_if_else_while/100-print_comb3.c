#include <stdio.h>

/**
 *  main - Prints numbers between 00 to 89
 *  Return: Always 0 (Success)
 *
 */

int main(void)

{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
