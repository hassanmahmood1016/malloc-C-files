#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char* encryptDecrypt(char* name, int size)
{
    char* ename = malloc(size + 1);
    char key[2] = "SM";
    ename[size] = '\0';
    int i;
    for (i = 0; i < size; i++)
    {
        ename[i] = key[i%2]^name[i];
    }
    
    return ename;
}


int main()
{
   
    
    char* name = "hassanmahmood";
    char* ename = encryptDecrypt(name, 13);
    char* dname = encryptDecrypt(ename, 13);
    
    printf("Encrypted : %s\n", ename);
    
    printf("Decrypted : %s\n", dname);
    
    return 0;
}
