#include "main.h"
/**
 * main - Entry point
 * Return: 1 if c is lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
