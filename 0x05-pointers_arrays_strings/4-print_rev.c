#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	char *str = s;
	int len = _strlen(str);

	for (len--; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
