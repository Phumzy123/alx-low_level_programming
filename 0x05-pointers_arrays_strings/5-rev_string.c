#include "main.h"

/**
 *rev_string -  reverses a string
 *@s: The string to be miodified
 *Returns: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;

	while (s[c] != '\0')
		c++;
	{
	c--;
	rv = s[1];
	s[1] = s[c];
	s[c] = rv;
	}
}
