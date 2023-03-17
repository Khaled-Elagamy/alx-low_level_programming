#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int units;
	int tens;
	int hundereds;

	for (hundereds = 0; hundereds <= 9; hundereds++)
	{
		for (tens = hundereds + 1; tens <= 9; tens++)
		{
			for (units = tens + 1; units <= 9; units++)
			{
				putchar(hundereds + '0');
				putchar(tens + '0');
				putchar(units + '0');
				if (hundereds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
