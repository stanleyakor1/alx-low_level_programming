#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6
#define ASCII_START 33
#define ASCII_END 126

int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH+1];
	
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % (ASCII_END - ASCII_START + 1) + ASCII_START;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}
