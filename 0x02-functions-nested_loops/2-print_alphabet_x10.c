#include "main.h"
/**
  *print_alphabet_x10 - printalphabet in lower case 10 x
  *
  *Return: 0 (success)
  */
void print_alphabet_x10(void)
{
	int i:
	char c:

		for (i = 0; i < 10; i++)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
			}
			-putchar('\n');
		}
}
