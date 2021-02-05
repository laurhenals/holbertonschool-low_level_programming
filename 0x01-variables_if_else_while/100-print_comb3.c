#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int a;
int b;
for (a = 0 ; a < 9 ; a++)
{
	for (b = a + 1 ; b < 9 ; b++)
	{
		putchar (a);
		putchar (b);
		if (a != 8 || b != 9)
		{
			putchar (44);
			putchar (32);
		}
	}
}
putchar('\n');
return (0);
}
