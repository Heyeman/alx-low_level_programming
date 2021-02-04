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
for (; a < 10; a++)
{
for (; b < 10; b++)
{
putchar(a + '0');
putchar(b + '0');
}
}
return (0);
}
