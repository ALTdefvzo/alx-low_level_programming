#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to concatenate
 * Return: pointer to the concatenated string
 * If the function fails, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cnt;
	size_t len1, len2, cnt_len;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	cnt_len = len1 + n + 1;

	cnt = malloc(cnt_len * sizeof(char));
	if (cnt == NULL)
	{
		return (NULL);
	}
	strcpy(cnt, s1);
	strncat(cnt, s2, n);
	cnt[cnt_len - 1] = '\0';
	return (cnt);
}
