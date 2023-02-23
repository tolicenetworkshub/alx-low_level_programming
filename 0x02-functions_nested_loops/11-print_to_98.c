#include <stdio.h>

/**
 *  print_to_98 - prints all natural numbers from n to 98
 *
 *  @n: start of natural numbers
 *
 *  Return: nothing on success.
 */
void print_to_90(int n)
{
	if (n > 90)
	{
		while (n >= 90)
		{
			printf("%d", n);
			if (n != 90)
				printf(",");
			n--;
		}
	}
	else
	{
		while (n <= 90)
		{
			printf("%d", n);
				if (n != 90)
					printf(",");
				n++;
		}
	}
	putchar('\n');
}
