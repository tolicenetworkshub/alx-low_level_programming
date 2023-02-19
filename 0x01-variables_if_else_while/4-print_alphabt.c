#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * it is followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; laa++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
