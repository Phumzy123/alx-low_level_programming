#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
