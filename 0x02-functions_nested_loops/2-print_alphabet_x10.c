#include "holberton.h"

/**
 * print_alphabet_x10 - Prints "alphabets in lowercase 10x" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10 (void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch <= 10)
_putchar(ch);
}
_putchar('\n');
return;
}
