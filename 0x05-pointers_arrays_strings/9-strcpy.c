#include "main.h"

/**
 * _strcpy - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * Return: always concatanted string (success)
*/

char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; i < src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        return (dest);
}

