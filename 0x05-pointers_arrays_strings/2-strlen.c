#include <stdio.h>

/**
 *_strlen -  returns the length of a string.
 *@str: To get the length of a string
 *Return: The length of @str.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
