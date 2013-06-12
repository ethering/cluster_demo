/* getenv example: getting path */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* getenv */
void myPrintHelloMake(void) 
{
	const char* user = getenv("USER");
	printf("Hello ");
	printf("%s\n", user);
	return;
}
