#include "holberton.h"
/**
 * _isalpha - a func
 *@c: a param
 *Return: value
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
