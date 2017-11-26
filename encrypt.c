#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* encryptDecrypt(char* name, char key, int size)
{
char* ename = malloc(size + 1);
ename[size] = '\0';

	int i;

	for (i = 0; i < size; i++)

	{

		ename[i] = key^name[i];

	}

return ename;

}
int main()

{
char key;

	printf("Please enter a key: ");

	key = getchar();

char* name = "hassanmahmood";

	char* ename = encryptDecrypt(name, key, 13);

	char* dname = encryptDecrypt(ename, key, 13);

printf("Raw string : %s\n", name);


printf("Encrypted : %s\n", ename);


printf("Decrypted : %s\n", dname);

return 0;

}
