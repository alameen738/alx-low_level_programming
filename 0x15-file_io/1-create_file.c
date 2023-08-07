#include "main.h"


/**
 * create_file - create_file
 * @filename: File name
 * @text_content: Text content
 *
 * Return: Return (- -1) when fails or (-1)
 */

int create_file(const char *filename, char *text_content)

{
int fg, x, pen = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (pen = 0; text_content[pen];)
pen++;
}
fg = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(fg, text_content, pen);
if (fg == -1 || x == -1)
return (-1);
close(fg);
return (1);

}
