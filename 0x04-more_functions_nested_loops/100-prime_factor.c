#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143, fp;

	for (fp = 2; fp <= num; fp++)
	{
		if (num % fp == 0)
		{
			num /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
