#include "main.h"
#include <stdio.h>

/**
 *_putchar - prints a character
 *@c: character input
 *Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
