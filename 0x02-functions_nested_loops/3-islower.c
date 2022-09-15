#include"main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: returns 1 if i is lowercase
 * otherwise always 0
 */

int _islower(int a)
{
if (a >= 97 && a <= 122)
{
return (1);
}
return (0);
}
