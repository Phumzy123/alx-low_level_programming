#include <stdio.h>
/**
 * main - Entry
 * Return - Always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n",sizeof(char));
	printf("Size of a int: %i bytes(s)\n",sizeof(int));
       printf("Size of long int; %i byte(s)\n",sizeof(longint));
       printf("Size of long long int; %i byte(s)\n",sizeof(longlongint));
       printf("Size of float; %i byte(s)\n",sizeof(float));
}
