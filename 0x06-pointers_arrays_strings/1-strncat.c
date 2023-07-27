#include "main.h"
/**
**_strncat - function used in concatinating two strings
*@dest: pointet integer
*@src: pointer integer
*Return: return dest for success
*@n: the normal pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
