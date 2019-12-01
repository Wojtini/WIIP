//phi.c
#include <stdio.h>
#include "funs.h"

int NWD(a,b){ // a >= b na początku
	int pom = 0;
	while(a!=0 && b!=0)
	{
		a = a%b;
		//swap
		pom = a;
		a = b;
		b = pom;
	}
	return a;
}

int phi(long int n)
{
	int wynik = 0;
	for(int i=1;i<n;i++)
	{
		if( NWD(i,n) == 1 )
			wynik = wynik + 1;
	}
	return wynik;
}
