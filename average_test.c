#include<stdio.h>
#include "average.h"

int main()
{
	int payments[5] = {1,2,3,4,5};
	if(average(payments) == 3){
		printf("成功\n");
	}else{
		printf("失敗");
	}
	return 0;
}

