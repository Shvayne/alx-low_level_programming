#include "main.h"
/**
 * _isalpha - uses isalpha  function
 * to check for alphabetic character
 * Return: 1 for sucess 0 for fail
 * @c: parameter to be checked
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
{
return (0);
}
}
