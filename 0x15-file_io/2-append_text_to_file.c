#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of file
 * @text_content: added content.
 * Return: 1 if the file exists, if filename is NULL -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_doc;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_doc = open(filename, O_WRONLY | O_APPEND);

	if (file_doc == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(file_doc, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_doc);

	return (1);
}
