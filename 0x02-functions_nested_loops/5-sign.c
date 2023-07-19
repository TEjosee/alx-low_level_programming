#include "main.h"
/**
 *print_sign - print sign from in ascii values in num
 *
 * @n: variable being declared
 *
 *Return: return anything you see
 */
int print_sign(int n)
{

	if (n > 0)
	{
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else (n < 0);
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
	}
	return (0);
}

