#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	char alpha2;

	for (alpha2 = 'z' ; alpha2 >= 'a' ; alpha2--)
	{
		putchar(alpha2);
	}
	putchar('\n');
return (0);
}
