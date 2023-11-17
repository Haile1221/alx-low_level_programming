#include <stdio.h>

int main(int argc, char *argv[])
{
	/* Check if at least one argument is provided (program name) */
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	} else
	{
		/* Handle the case where no arguments are provided */
		fprintf(stderr, "Usage: %s <program_name>\n", argv[0]);
		return (1);
	}
}

