#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	double newpop = population;
	double newpop2 = population;
	int year,i;
	double a = 1;

	printf("%15s%30s%25s\n", "Year from now", "population (in millions)", "Incress (in millions)");
	for (year = 1; year <= 75; year++){
		for(i = 1; i <= year; i++){
			a = a*(1 + rate);
		}
		newpop2 = newpop;
		newpop = population	* a;
		printf("%15d%30.2f%25.f\n", year, newpop, newpop - newpop2);
		a = 1;
	}
	system("pause");
	return 0;
}