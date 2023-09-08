#include <stdio.h>


/**
 * main - creating a program that will print in lower and upper case alphabets
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar('\n');
	return (0);
}
