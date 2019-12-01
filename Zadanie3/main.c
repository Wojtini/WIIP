//phi.c
#include <stdio.h>
#include "funs.h"

int main(){
	int a;
	printf("Wpisz liczbe:\n");
	scanf("%d",&a);
	printf("Liczba eulera dla n=%d: %d\n",a,phi(a));
	return 0;
}
