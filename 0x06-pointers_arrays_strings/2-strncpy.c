#include "main.h"
/**
 **_strncpy - function used in cpying string
 *@dest: pointer var
 *@src: secod pointer
 *@n: the normal var
 *Return: return desk
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
