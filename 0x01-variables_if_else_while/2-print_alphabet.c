#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - prints alphabets in lower case
*
*Return: 0 (success)
*/

int main(void)
{
char Alp[26] = "abcdefghijklmnopqrstuvwxyz";
int a;
for (a = 0; a < 26; a++)
{
putchar (Alp[a]);
}
putchar ('\n');
return (0);
}
