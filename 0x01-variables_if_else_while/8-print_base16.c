#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the base 16 numebrs in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
