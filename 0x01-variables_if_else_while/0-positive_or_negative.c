#include <stdio.h>

#include <time.h>

#include <stdio.h>
/**
 * main - Print if number is positive, zero or negative
 * Return: return (success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() = RAND_MAX  

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
		
}
