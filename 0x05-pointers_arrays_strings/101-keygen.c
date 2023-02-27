#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 8
#define ASCII_RANGE 94
#define ASCII_START 33

int main(void)
{
	char password[PASSWORD_LEN + 1];
	int i;
    
	srand(time(NULL)); // Initialize random number generator//
	for (i = 0; i < PASSWORD_LEN; i++)
	{
		password[i] = rand() % ASCII_RANGE + ASCII_START;
	}
	password[PASSWORD_LEN] = '\0'; // Null-terminate the string
	printf("Random Password: %s\n", password);
	return 0;
}
