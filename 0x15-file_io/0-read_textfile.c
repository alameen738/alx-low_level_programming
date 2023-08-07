#include "main.h"

#include <stdlib.h>


/**
 * read_textfile- read_textfile
 * @filename: File name.
 * @letters: Letters
 * Return: Return w-
 * 0 if  (fails) or NULL for file name.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

char *buf;

ssize_t fg;
ssize_t x;
ssize_t t;
fg = open(filename, O_RDONLY);
if (fg == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fg, buf, letters);
x = write(STDOUT_FILENO, buf, t);
free(buf);
close(fg);
return (x);

}
