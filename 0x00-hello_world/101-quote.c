#include <unistd.h>
#include <string.h> /* Added this header file */

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", /* Removed a double quote before and */
	      sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n")); /* Changed strlen to sizeof */
	return (1);
}

