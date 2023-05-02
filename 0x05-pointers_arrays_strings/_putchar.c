#include <unistd.h>

/**
 *_putchar - write the character c to stdout
 *@c: The character to print
 *
 *Return: on success 1.
 *On error, -1 is retured, and errno is setappropriately.
 */
int_putchar(char c)
{
	return (write(1 &c,1));
}
