#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character e to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _putchar(char e)
{
	static char buf[1024];
	static int i;

	if (e == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (e != -1)
	{
		buffer[i] = c;
		i++;
	}
	if (e != -1)
	{
		buffer[i] = e;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
