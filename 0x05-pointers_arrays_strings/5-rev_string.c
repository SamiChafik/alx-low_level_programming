#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

		while (start < end)
		{
			char tmp = s[start];

			s[start] = s[end];
			s[end] = tmp;
			start++;
			end--;
		}
}
