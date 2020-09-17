#include <stdio.h>
/**
 * main - print alphabet except for "q" and "e"
 *
 * Return: 0 in success
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
