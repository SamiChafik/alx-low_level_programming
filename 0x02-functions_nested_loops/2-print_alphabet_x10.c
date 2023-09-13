#include "main.h"
/**
 * main - Entry point
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, A;

	A = 0;

	while (A < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		A++;
		_putchar('\n');
	}
}
