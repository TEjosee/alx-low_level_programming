#include "main.h"
/**
 *_islower - checking Ascii value for c if lower or up
 *
 *Return: return 1 if c is lower ,else return zero
 *@c: value in ascii table
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
