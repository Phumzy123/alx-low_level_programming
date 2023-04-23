#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, last digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (last digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last digit);
	}
	else if (last digit == 0)
	{
		printf("last digit of %d is %d and is 0\n" n, last digit);
	}
	else if (last digit < 6 && last digit != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last digit);
	}
	return (0);
}
