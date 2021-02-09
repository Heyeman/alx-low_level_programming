#include "_putchar.c"
int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

  int i;
  int  h = (char) 56437289;

  for (i = 0; i < 9; i++)
    {
      _putchar (h[i]);
    }
  _putchar ('\n');
  return (0);
}
