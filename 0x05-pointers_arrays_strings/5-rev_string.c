#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{		
	int l = 0, m = 0;
	char ls[700];

	while(*(s + m))
		{
			ls[m] = s[m];
			m++;
		}
	m = m -1;
	while (m >= 0)
		{
			s[m] = ls[l];
			l++;
			m--;
		}
}
