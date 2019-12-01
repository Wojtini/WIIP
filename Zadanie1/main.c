//main.c
#include <stdio.h>
#include <string.h>
#include "funs.h"

int main()
{
	char a[10];
	printf("Wpisz slowo\n");
	scanf("%s", a);
	if(palindrom(a)==1)
		printf("Slowo %s jest palindromem\n", a);
	else
		printf("Slowo %s nie jest palindromem\n", a);
	return 0;
}
