// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int abs(int x) {
	return (x >= 0) ? (x) : (-(x));
}

inline double abs(double x) {
	return (x >= 0) ? (x) : (-(x));
}

int main()
{
	int i = -5;
	double d = 12.5;

	i = abs(i);
	d = abs(d);

	printf("i = %d\n", i);
	printf("d = %f\n", d);

    return 0;
}

