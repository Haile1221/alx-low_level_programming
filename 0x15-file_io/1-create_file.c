#include <stdio.h>
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
void create_file(char *filename)
{FILE * fp;  /* FILE datatype to store file pointer */

	fp = fopen(filename, "w"); /* open file with given filename in write mode */

	if (fp == NULL) 
	{  /* check if the file pointer is validFILE *fp;
	    *Declare a file pointer
	    *Try to open the file for writing
	    */
		fp = fopen(filename, "w");

		/* Check if the file opened successfully */
		if (fp == NULL) 
		{
			printf("Error opening file.");
			return;
		}
		/* Write some content to the file */
		fprintf(fp, "Hello, world!");

		/* Close the file */
		fclose(fp);

		printf("File created successfully.");
	}
