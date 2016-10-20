#include<stdio.h>
#include"sum.c"
#include"average.c"
#include"sumx.c"
#include"averagex.c"

int main(void)
{
	int payments[] = {45,45,45,45,45};
	int spendings[] = {56,56,56,56,56};
	printf("sum:%d ave:%d\n",sum(payments),average(payments));
	printf("sum:%d ave:%d\n",sumx(spendings),averagex(spendings));

	return 0;
}
