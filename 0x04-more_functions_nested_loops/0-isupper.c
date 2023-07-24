#include "main.h"
/**
 *_isupper - the function for checking upper case letter
 *@c: the varialbe being used in the parameter
 *
 *Return: return 1 if c is uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
