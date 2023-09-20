#include "shell.h"

/**
 * _strlen - To measure the length of the string
 * @s: The string whose length is to be calculated
 *
 * Return: The length of the string as an integer
 */
int _strlen(char s)
{
	int l = 0;

	if (!s)
		return (0);

	while (s++)
		i++;
	return (i);
}

/**
 * _strcmp - To compare the two strings lexicographically
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A negative value if s1 < s2, positive if s1 > s2, 0 if s1 == s2
 */
int _strcmp(char s1, char s2)
{
	while (s1 && s2)
	{
		if (s1 != s2)
			return (s1 - s2);
		s1++;
		s2++;
	}
	if (s1 == s2)
		return (0);
	else
		return  (s1 < s2 ? -1 : 1);
}

/**
 * starts_with - To ensure if a string starts with a specified substring
 * @haystack: The string that is to be searched
 * @needle: The string to find at beginning of haystack
 *
 * Return: Address of the nect character in haystack, or NULL if is not found
 */
char starts_with(const char haystack, const char needle)
{
	while (needle)
		if (needle++ != haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Attach the two strings together
 * @dest: The destination buffer which source will append
 * @src: The source buffer to append to destination
 *
 * Return: Pointer to the destination buffer.
 */
char _strcat(char dest, char src)
{
	char ret = dest;

	while (dest)
		dest++;
	while (src)
		dest++ = src++;
	dest = src;
	return (ret);
}
