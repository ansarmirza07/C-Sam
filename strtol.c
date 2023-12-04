#include <stdio.h>
#include <stdlib.h>

int main () 
{
	char str[30] = "124 $$ 2222";
	char *ptr;
	long ret;
	ret = strtol(str, &ptr, 32);
	printf("number %ld ",ret);
printf("string part is %s",ptr);
}
