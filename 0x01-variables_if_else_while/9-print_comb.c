#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1;
putchar(0 + '0');
while (a < 10)
{
putchar(',');
putchar(' ');
putchar(a + '0');
a++;
}
return (0);
}
