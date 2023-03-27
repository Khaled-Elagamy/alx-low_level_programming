#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int count = 0, index;

	while (s[index++])
		count++;
		
	for (index = count - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
