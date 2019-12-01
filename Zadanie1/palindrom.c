//palindrom.c
#include <stdio.h>
#include <string.h>
#include "funs.h"

int palindrom(char napis[])
{
	int len = strlen(napis);
	for(int i=0;i<len/2;i++)
	{
		if(napis[i]!=napis[len-i-1])
		{
			return 0;
		}
	}
	return 1;
}
