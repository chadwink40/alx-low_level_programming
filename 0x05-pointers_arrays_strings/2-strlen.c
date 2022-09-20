#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int len_s;

len_s = 0;
while (s[len_s] != '\0')
{
len_s++;
}
return (len_s);
}
