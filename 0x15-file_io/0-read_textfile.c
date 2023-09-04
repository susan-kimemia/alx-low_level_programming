#include "main.h"
#include <stddef.h>

/**
 * read_textfile - prinys, read text file to the standard output
 * @filename: file naming
 * @letters: num of letters that are printed
 * Return: num of letters Read & printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int ffile, _read, wrete;
char *buf;
buf = malloc(sizeof(*buf) * (letters + 1));
if (filename == NULL || buf == NULL)
{
free(buf);
return (0);
}
ffile = open(filename, O_RDONLY);
if (ffile == -1)
return (0);
_read = read(ffile, buf, letters);
if (_read == -1)
return (0);
buf[_read] = '\0';
wrete = write(STDOUT_FILENO, buf, _read);
if (wrete != _read)
return (0);
free(buf);
close(ffile);
return (_read);
}

