#include "main.h"
/**
 * _isalpha - Controls if a charcter is alphabetical
 * @c: characer to be verified
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

return (0);
}
