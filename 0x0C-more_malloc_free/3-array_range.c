#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range -  function that creates an array of integers
 * Return: pointer to the created array
 * @min: minimum value of the range
 * @max: maximum value of the range
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
