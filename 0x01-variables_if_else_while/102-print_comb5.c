#include <stdio.h>

int main(void)
{
int x = '0';

while  (x <= '9')
{
int y = '0';

while  (y <= '9')
{
int z = '0';

while (z <= '9')
{
int a = '0';

while (a <= '9')
{
if (x <= z && y < a)
{
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(a);


if (x == '9' && y == '8' && z == '9' && a == '9')
break;
putchar(',');
putchar(' ');
}
a += 1;
}
z += 1;
}
y += 1;
}
x += 1;
}
putchar('\n');
return (0);
}
