#include <stdio.h>
/**
 *main - calling printf from the stdio
 *
 *Return: Always return zero for success
 */
int main(void)
{
	int a;
	for (a = 0; a < 10; a = a + 1)
	printf("%d\n", a);
	return (0);
}
