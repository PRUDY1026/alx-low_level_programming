#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Adjust n if it's greater or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Concatenate the first n bytes of s2 */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';

	return (concat);
}

