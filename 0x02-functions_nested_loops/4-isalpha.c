#include "main.h"
/**
 *_isalpha - checking for alphabeth in ascii table
 *
 *Return: return one if c is a letter ,lowercase or 
 *uppercase else return zero
 *
 *@c: variable being declared
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
