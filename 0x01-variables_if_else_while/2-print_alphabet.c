#include <stdio.h>

/**
 * main - program for printing lowercase alphabets in a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
