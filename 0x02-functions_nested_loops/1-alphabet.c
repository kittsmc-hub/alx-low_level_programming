#include "main.h"
/**
   * print_alphabet - prints out the alphabet
    *
     * Return: Always 0.
      */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;


	}

	_putchar('\n');
}

