#include "main.h"
/**
   * print_alphabet_x10 - prints out the alphabet 10 times
    *
     * Return: Always 0.
      */
void print_alphabet_x10(void)
{
	char b;
	char c;


	for (c = 0; c <= 9; c++)
	{

		for (b = 'a'; b <= 'z' ; b++)

		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
