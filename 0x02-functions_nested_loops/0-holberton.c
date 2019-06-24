#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
  char h[] = "Holberton\n";
	int i = 0;
	
		while (h[i] != '\0')
		{
			_putchar(h[i]);
			i++;
		}
	return (0);
}
