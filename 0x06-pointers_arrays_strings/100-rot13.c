include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest.
 */

char *rot13(char *)
{
	if (s == NULL)
		return (NULL);
for (int i = 0; s[i] != '\0'; i++)
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
s[i] += 13;
else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
s[i] -= 13;
return (s);
}
