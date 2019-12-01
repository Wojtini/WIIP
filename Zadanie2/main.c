//rozwiazanie.c
#include <stdio.h>
#include "funs.h"

int main(){
	double a = 2;
	double b = 4;
	double eps = 0.001;
	printf("Rozwiazanie: %lf\n",rozwiazanie(a,b,eps));
	return 0;
}
