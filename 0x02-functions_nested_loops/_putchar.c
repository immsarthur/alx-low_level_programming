#include "main.h"
#include <unistd.h>
/**
 * writing the character c to stdout using _putchar
 * Returns on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
