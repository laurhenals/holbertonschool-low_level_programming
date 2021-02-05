#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int a = '0';

while (a <= '9')
{

int b = '0';
while (a <= '9')
{
if (a == b)
{
continue;
}
else if (a < b)
{
putchar(a);
putchar(b);
if (a == 8 && b == 9)
{
break;
}
putchar (',');
putchar (' ');
}
a++;
}
b++;
}
putchar ('\n');
return (0);
}
