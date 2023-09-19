#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to evaluate
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
