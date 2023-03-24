#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143, pf;

	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
