#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	for (len--; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
