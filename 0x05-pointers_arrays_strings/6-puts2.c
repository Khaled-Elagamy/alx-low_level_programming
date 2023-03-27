#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */

void puts2(char *str)
{
	int index = 0, count = 0;

	while (str[index++])
		count++;
	for (index = 0; index < count; index +=2)
		_putchar(str[index]);
	_putchar('\n');
}
