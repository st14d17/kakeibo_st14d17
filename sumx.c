#include<stdio.h>

int sumx(int spendings[])
{
	int i,result=0;
	for(i=0;i<5;i++) {
		result = result + spendings[i];
	}
	
	return result;
}
