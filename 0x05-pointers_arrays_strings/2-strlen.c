#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @s: String pointer to the string whose length is to be found
 * Return: Returns the length of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/*increment up to when tbe last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
