#include "main.h"
int taille = 0;
/**
 * _strlen_recursion - function
 *
 * @s: the chaine
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (s[taille] != '\0')
	{
		taille++;
		_strlen_recursion(s);
	}
	return (taille);
}
