#include"main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: returns 1 if i is lowercase
 * otherwise always 0
 */

int _islower(int i)
{
if (i >= 97 && i <= 122)
{
return (1);
}
return (0);
}
