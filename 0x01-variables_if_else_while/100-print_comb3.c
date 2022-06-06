#include <stdio.h>

/**
 *  main - Prints numbers between 00 to 89
 *  Return: Always 0 (Success)
 *
 */

int main(void)

{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 46 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
