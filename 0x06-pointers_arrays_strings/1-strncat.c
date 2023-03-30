#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */


char *_strncat(char *dest, char *src, int n)
{

int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; j <= strlen(src); j++)
{
if (src[j] == src[n])
{
break;
} 
else
{

dest[i] = src[j];
i++;
}
}
dest[i] = '\0';
return (dest);

}
