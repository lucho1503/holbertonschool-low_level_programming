#include "holberton.h"

/**
 * *cap_string - Entry point.
 * @s: pointer to array.
 * Return: srting cap.
 */

char *cap_string(char *s)
{
int z = 0;
for (; s[z] != '\0'; z++)
{
	if (s[z] >= 'a' && s[z] <= 'z')
	{
		if (s[z - 1] == ' ' || s[z - 1] == ',')
		{
			s[z] -= 32;
		}
		else if (s[z - 1] == ';' || s[z - 1] == '.')
		{
			s[z] -= 32;
		}
		else if (s[z - 1] == '!' || s[z - 1] == '?')
		{
			s[z] -= 32;
		}
		else if (s[z - 1] == '"' || s[z - 1] == '(')
		{
			s[z] -= 32;
		}
		else if (s[z - 1] == ')' || s[z - 1] == '{')
		{
			s[z] -= 32;
		}
		else if (s[z - 1] == '}')
		{
			s[z] -= 32;
		}
		else if (s[z - 1] == 10 || s[z - 1] == 9)
		{
			s[z] -= 32;
		}
		else if (s[z] == '\0')
		{
			s[z] -= 32;
		}
	}
}
return (s);
}
