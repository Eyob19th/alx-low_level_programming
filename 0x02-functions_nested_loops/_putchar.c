#include <unistd.h>
/**
  *_putchar - writes character into std out
  *
  *Return: 1
  */

int _putchar(char c)
{
	return (write(1, &ch, 1));
}
