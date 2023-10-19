#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations of three different digits,in ascending order, separated by a comma followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if ((j != i) != k)
				{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 7 && j == 8)
					continue;
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
