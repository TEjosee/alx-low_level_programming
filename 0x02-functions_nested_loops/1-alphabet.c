#include "main.h"

/**
 * print_alphabet - printing alphabet to the screen
 * Return: Always zero for success
 */
void print_alphabet(void)
{
	char l;
	
	for (l = 97; l <= 122; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
