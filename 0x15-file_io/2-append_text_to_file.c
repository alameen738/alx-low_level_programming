#include "main.h"


/**
 * append_text_to_file - append_text_to_file
 * @filename: The file name.
 * @text_content: The text content.
 *
 * Return: Return (fails) if success or (NULL - -1).
 */

int append_text_to_file(const char *filename, char *text_content)

{
int a, b, pen = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (pen = 0; text_content[pen];)
pen++;
}
a = open(filename, O_WRONLY | O_APPEND);
b = write(a, text_content, pen);
if (a == -1 || b == -1)
return (-1);
close(a);
return (1);

}
