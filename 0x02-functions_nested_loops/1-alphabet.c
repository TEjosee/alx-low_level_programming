#include "main.h"
/**
 * print_alphabet - printing alphabet to the screen
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char alph;
	
	for (alph = 'a'; alph <= 'z'; alph++)
	{	
		_putchar(alph);
	}
		_putchar('\n');
	return (0);
}

