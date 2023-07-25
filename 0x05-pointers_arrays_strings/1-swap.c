#include "main.h"
/**
 *swap_int - function used in swaping files
 *@a: pointer used
 *@b: second pointer
 *Return: always zero for success
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
