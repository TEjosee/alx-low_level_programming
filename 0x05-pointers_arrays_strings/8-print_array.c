#include <stdio.h>
/**
 *print_array - function usesd in printing the n num of an array
 *
 *@a: pointer variable
 *@n: integet variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != (n - 1))
	{
		printf(", ");
	}
	printf("\n");
	}
}
