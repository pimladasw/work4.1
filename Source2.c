//work4.2
#include<stdio.h>
int_main() {
	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = 1; i <= 10; j++) {
			if (i <= 3 || j <= 3 || i >= 10 - 2 || j >= 10 - 2) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}