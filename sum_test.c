#include <stdio.h>
#include "sum.h"
	
int main(void)
{
	int payments[5] = {1,2,3,4,5};
	if(sum(payments) == 15) {
		printf("1~5sum : テスト成功\n");
	} else {
		printf("1~5sum : テスト失敗\n");
	}

	return 0;
}
