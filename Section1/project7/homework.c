#include <stdio.h>

void smileFun(void);

int main(void) {
	int i;
	for(i = 0; i < 3; i++) {
		smileFun();
	}
	printf("\n");
	for(i = 0; i < 2; i++) {
		smileFun();
	}
	printf("\n");
	smileFun();

	getchar();
	return 0;
}

void smileFun(void) {
	printf("Smile!");
}