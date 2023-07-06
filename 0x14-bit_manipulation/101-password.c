#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *program_text = fopen("101-program.txt", "r");
	if (program_text == NULL) {
		printf("Could not open file 101-program.txt\n");
		exit(1);
	}

	char *password = malloc(sizeof(char) * 6);
	int i = 0;
	while (i < 6) {
		char character = fgetc(program_text);
		if (character >= '0' && character <= '9') {
			password[i] = character;
			i++;
		}
	}

	fclose(program_text);

	FILE *password_file = fopen("101-password", "w");
	if (password_file == NULL) {
		printf("Could not open file 101-password\n");
		exit(1);
	}

	fputs(password, password_file);

	fclose(password_file);

	free(password);

	return 0;
}
