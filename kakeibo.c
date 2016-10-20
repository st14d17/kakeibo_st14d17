#include<stdio.h>
#include"sum.c"
#include"average.c"

int main(void)
{
	int payments[] = {45,45,45,45,45};
	printf("sum:%d ave:%d\n",sum(payments),average(payments));
	
	return 0;
}
