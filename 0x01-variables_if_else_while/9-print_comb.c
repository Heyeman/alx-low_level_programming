#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 0;
char b = 0;
while (a < 10)
{
while (b < 10)
{
putchar(a + '0');
putchar(b + '0');
putchar(', ');
b++;
}
a++;
}
return (0);
}
