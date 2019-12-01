//rozwiazanie.c
#include <stdio.h>
#include <math.h>
#include "funs.h"

double rozwiazanie(double a, double b, double eps)
{
	double c;
	//printf("a=%lf b=%lf eps=%lf\n",a,b,eps);
	double odl = a-b;
	odl = fabs(odl);
	//printf("Odleglosc poczatkowa=%lf\n",odl);
	while(odl>=eps)
	{
		//printf("Przedzial: (%lf,%lf) i dlugosc %lf. Wymagany: %lf\n",a,b,odl,eps);
		c = (a+b)/2;
		if(f(c)==0)
			return c;
		if(f(c)*f(a) < 0)
			b=c;
		else
			a=c;
		odl = a-b;
		odl = fabs(odl);
		//printf("End odleglosc=%lf\n",odl);
	}
	return a;
}
