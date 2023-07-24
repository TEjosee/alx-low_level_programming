#include "main.h"
/**
 *_isdigit - the function checking if c is a digit or not
 *
 *@c: is the variable
 *Return: return 1 if c is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 43 && (c <= 63))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
