#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char word[10] = "Holberton";
int a = 0;
while (a < 9)
{
putchar(word[a]);
a++;
}
putchar('\n');
return (0);
}
