#include <stdio.h>


/**
*print_to_98 - Function to print from n to 98
*@n: the number
*/

void print_to_98(int n)
{

if (n > 98)
{
for (; n > 97; n--)
{

printf("%d, ", n);

}
}
else if (n < 98)
{
for (; n < 99; n++)
{
printf("%d, ", n);


}
}
printf("\n");
}
