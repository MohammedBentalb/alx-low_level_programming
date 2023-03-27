#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - Function to swap values of *a and *b
 * @s: ponter
 * main - Entry function
 */

int _strlen(char *s)
{
int n = 0;

while (*s++ != '\0')
{
n++;
}
return (n);

}
