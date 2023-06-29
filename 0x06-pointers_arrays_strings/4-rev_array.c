#include "main.h"

/**
 * reverse_array - function tat reverses te content of an array of inteers.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
