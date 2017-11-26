#include <stdio.h>

#include <stdlib.h>

#include <string.h>

void main(void)

{

char sir1[4];

char *sir2;

printf("Enter a string: \n");

scanf("%s", sir1);

printf("length %i \n",(int)strlen(sir1));

printf("size %i \n",(int)sizeof(sir1));

if ((sir2=(char *)malloc(strlen(sir1)+1))==NULL) {

printf("memory allocation error !\n");

exit(1);

}

strcpy(sir2, sir1);

printf("The copy is: %s \n", sir2);

}
