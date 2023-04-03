#include <stdio.h>
#include "main.h"

/**
 * *_strchr - find location of a character
 *@s: target to search in
 *@c: the character to find
 *Return: return s depending on the location
 *
 */


char *_strchr(char *s, char c)
{


while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

return (NULL);

}
