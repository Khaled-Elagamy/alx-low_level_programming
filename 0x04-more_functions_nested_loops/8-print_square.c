#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */

void print_square(int size)
{
	int hieght, width;

	if (size > 0)
	{
		for (hieght = 0; hieght < size; hieght++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			if (hieght == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
