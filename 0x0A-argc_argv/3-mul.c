#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers and give result
 * @argc: arguement count
 * @argv: arguement array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;
	int m;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	result = n * m;
	printf("%d\n", result);
	return (0);
}
