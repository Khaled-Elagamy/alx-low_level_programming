#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A program to write all the alphabets in lowercase
 *	except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
