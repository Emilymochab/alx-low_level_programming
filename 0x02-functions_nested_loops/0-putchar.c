#include "main.h"
/**
 * main - all programs run from witin this function
 *
 * Return: returb 0 if the program is good _putchar
 */
int main(void)
{
	int i;
	char name [8] = "_putchar";
	for (i = 0; i < 8; i++)
	{
	_putchar (name[i]);
	}
	_putchar('\n');
	return (0);
}
