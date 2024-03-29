#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

/**
 * main - print exact password
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned char digest[MD5_DIGEST_LENGTH];
	char string[] = "password";

	MD5((unsigned char *)&string, strlen(string), (unsigned char *)&digest);

	int i;

	for (i = 0; i < MD5_DIGEST_LENGTH; i++)
		printf("%02x", digest[i]);

	return (0);
}
