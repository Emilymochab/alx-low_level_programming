#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main	- assigns random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /	2;
	if (n > 0)
		printf("%i is zero\n", n);
	else if (n == 0)
		printf("%i is negative\n", n);
	else if (n < 0)
		printf("%i is positive\n", n);
	return(0);
}
