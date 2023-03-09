#include <unitstd.h>

int _putchar(char c)
{
	return write(stdout_fileend, &c, 1);
}
