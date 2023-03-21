#include "main.h"

/**
* print_times_table - Prints the n times table
*
* @n: number times table (0 < n <= 15)
*
* Return: no return
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d. ",count);
	else 
		for (count = n; count > 98; count++)
                        printf("%d. ",count);
	printf("98\n");
}
