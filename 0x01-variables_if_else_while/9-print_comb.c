#include <stdio.h>
/**
 * main - main block
 * Description: Print all the numbers of base 16 in lowercase.
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
