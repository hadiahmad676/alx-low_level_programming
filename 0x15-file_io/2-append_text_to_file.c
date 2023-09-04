#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to append content to
 * @text_content: added content
 * Return: 1 on success and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fdesc = open(filename, O_WRONLY | O_APPEND);

	if (fdesc == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fdesc, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fdesc);

	return (1);
}
