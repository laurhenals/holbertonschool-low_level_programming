#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int c, d;
for (c = 0; c < 10; c++)
{
for (d = 0; d < 10; d++)
{
putchar((c % 10) + '0');
putchar((d % 10) + '0');
if(c == 9 && d == 9)
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
