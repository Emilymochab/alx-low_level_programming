#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char typechar;
	int typeInt;
	long typelongInt;
	long long typelonglongInt;
	float typefloat;
	/* With sizeof() we get the number of bytes */
	printf("Size of a char: %lu byte(s)\n", sizeof(typeChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(typeInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(typeLongInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(typeLongLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(typeFloat));

	return (0);
}
