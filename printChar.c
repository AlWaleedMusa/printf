#include "main.h"

/**
 * printfChar - print character to stdout.
 * @ch: char passed form _printf.
 * Return: an int, (number of printed characters).
*/

int printfChar(int ch)
{
	return (write(1, &ch, 1));
}
