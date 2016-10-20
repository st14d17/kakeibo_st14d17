#include<stdio.h>

int sum(int payments[])
{
	int i,result=0;
	for(i=0;i<5;i++) {
		result = result + payments[i];
	}
	
	return result;
}
