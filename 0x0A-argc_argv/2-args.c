#include <stdio.h>

/**
 * main - entry point
 * Description: prints all command line arguements
 * @argc: the count of arguements
 * @argv: the array of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
