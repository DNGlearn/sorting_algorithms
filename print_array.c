#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - the func
 *
 * @array: variable 1
 * @size: variable 2
 */
void print_array(const int* array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", arraye[i]);
		++i;
	}
	printf("\n");
}
