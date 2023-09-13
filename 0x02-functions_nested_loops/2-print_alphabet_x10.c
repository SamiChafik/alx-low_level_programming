#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
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
