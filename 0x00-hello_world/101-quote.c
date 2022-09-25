#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point of the program
 *
 * Decription - Prints exacty
 * and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a newline to the standard error
 *
 * Return: 0 (success)
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
