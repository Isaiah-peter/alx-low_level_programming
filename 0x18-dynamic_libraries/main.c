#include "main.h"
#include <stdio.h>
int main()
{
	int a = add(2, 5);
	int mu = mul(7, 2);
	int d = div(15, 3);
	int m = mod(12, 3);
	int s = sub(12, 11);
	printf("mul %d\n", mu);
	printf("add %d\n", a);
	printf("div %d\n", d);
	printf("mod %d\n", m);
	printf("sub %d\n", s);
	return m;
}
