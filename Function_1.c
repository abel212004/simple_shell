#include "shell.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate
 *
 * Return: address of the new string
 */
char *_strcat(char *dest, char *src)
{
	char *new_str = NULL;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	new_str = malloc(sizeof(*new_str) * (dest_len + src_len + 1));
	_strcpy(dest, new_str);
	_strcpy(src, new_str + dest_len);
	new_str[dest_len + src_len] = '\0';
	return (new_str);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string to be used
 *
 * Return: number of bytes in the initial segment of s which are part of accept
 */
int _strspn(char *s, char *accept)
{
	int i = 0;
	int match = 0;

	while (s[i] != '\0')
	{
		if (_strchr(accept, s[i]) == NULL)
			break;
		match++;
		i++;
	}
	return (match);
}

/**
 * _strcspn - computes segment of s which consists of characters not in reject
 * @s: string to be searched
 * @reject: string to be used
 *
 * Return: index at which a character in s exists in reject
 */
int _strcspn(char *s, char *reject)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(reject, s[i]) != NULL)
			break;
		len++;
	}
	return (len);
}

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be checked
 *
 * Return: pointer to the first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
