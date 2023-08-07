#include "main.h"
#include <stddef.h>

/**
 * _strlen - count the string length
 * @str: string
 * Return: length of the string
 */
int _strlen(char *str)
{
int leng = 0;
while (str[leng] != '\0')
leng++;
return (leng);
}

/**
 * append_text_to_file - appends text
 * @filename: filename
 * @text_content: appended content
 * Return: 1 (success), otherwise  -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int ffile, wrete;
if (filename == NULL)
return (-1);
ffile = open(filename, O_WRONLY | O_APPEND);
if (ffile == -1)
return (-1);
if (text_content != NULL)
{
wrete = write(ffile, text_content, _strlen(text_content));
if (wrete == -1)
{
close(ffile);
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

