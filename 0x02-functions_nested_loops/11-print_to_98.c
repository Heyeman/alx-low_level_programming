#include "holberton.h"
/**
 * print_to_98 - func
 * @n: param
 * Return: 0
 */
void print_to_98(int n)
{
if (n == 98)
printf("%d",n);
else if (n < 98)
{
while (n <= 98)
{
printf("%d",n)
n++;
}
}
else
{
while (n >= 98)
{
printf("%d",n)
n--;
}
}
}