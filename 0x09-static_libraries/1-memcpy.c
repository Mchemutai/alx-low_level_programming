#include "main.h"
/**
 *_memcpy -   copy number bytes from adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int k;

	k = 0;
	while (k < n)  /*Delacring WHILE*/
	{
		*(dest + k) = *(src + k);
		k++;
	}

	return (dest);
}
