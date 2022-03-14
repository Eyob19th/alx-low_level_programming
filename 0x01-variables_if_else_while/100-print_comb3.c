#include <stdio.h>
/**
  *main - entry point
  *
  *Return Always 0 (success)
  */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 100; i++)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
