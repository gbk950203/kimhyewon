
#include "stdafx.h"

int main() {
	int i, j, cnt = 1;
	char ch = 'A';

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (i%2==0)
				continue;
			printf("%d * %d = %d \n", i, j, i*j);
		}
		printf("\n");
	}

	/* 다중 반복문 */
	/*
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d: %c \n", cnt, ch);
			cnt++;
		}
	}
	*/
	
	return 0;
}