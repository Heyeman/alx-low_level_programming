#include "_putchar.c"
#include <stdio.h>
#include "holberton.h"
#include "7-print_last_digit.c"

int main(void)
{
  int r;

  print_last_digit(98);
  print_last_digit(0);
  r = print_last_digit(-1024);
  _putchar('0' + r);
  _putchar('\n');
return (0);
}
