#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A rpogram to write all the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
