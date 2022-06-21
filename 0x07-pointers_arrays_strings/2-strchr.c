#include "main.h"

/**
 * _strchr - function that finds character c in string s
 * @c: character to find
 * @s: string to search in
 * Return: pointer to first occurrence of char c or NULL
 * if not found
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) == c)
            return (s + i);   
    }
    if (c == '\0')
        return (s + i);
    return ('\0');
}