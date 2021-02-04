#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
int b = 0;
while (a < 10)
{
while (b < 10)
{
putchar(a);
putchar(b);
if (a != 9 && b != 9)
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
return (0);
}
