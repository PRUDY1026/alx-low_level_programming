#include <stdio.h>

/**
 * main - ctreate a program that will print lower and upper case alphabets.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
}
	putchar('\n');

	return (0);
}
