#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * print_last_digit - func
 * @c: param
 * Return: 0
 */
int print_last_digit(int c)
{
if (c < 0)
c = -c;
c = c % 10;
_putchar(c + '0');
return (c);
}
