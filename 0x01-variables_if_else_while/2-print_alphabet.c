#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  *main - where compilation starts
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
