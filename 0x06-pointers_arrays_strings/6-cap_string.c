#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while(!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		switch (str[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] = str[i + 1] - 32;
				}
		}
	}
	return (str);
}
