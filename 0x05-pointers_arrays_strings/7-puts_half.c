#include "main.h"

/**
 *puts_half - Prints half of a string
 *@str: The string to print
 *Return: void
 */

void puts_half(char *str)
{

	int j = 0;
	int k = 0;

	while (str[j] != '\0')

		j++;
			{
			k = (j - 1) / 2;
			k += 1;
			}

			for (; k < j; k++)
			{
			_putchar(str[k]);
			}
			_putchar('\n');

}
