#include "main.h"
#include <stddef.h>

/**
 * _strlen - string length count
 * @str: the string
 * Return: len of str
 */
int _strlen(char *str)
{
int leng = 0;
while (str[leng] != '\0')
leng++;
return (leng);
}

/**
 * create_file - file creat
 * @filename: filename
 * @text_content: content
 * Return: 1 (success), otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int ffile, wrete;
if (filename == NULL)
return (-1);
ffile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (ffile == -1)
return (-1);
if (text_content != NULL)
{
wrete = write(ffile, text_content, _strlen(text_content));
if (wrete == -1)
{
return (-1);
}
close(ffile);
return (1);
}
else
{
close(ffile);
return (1);
}
}

