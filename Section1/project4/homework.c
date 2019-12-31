#include <stdio.h>

void jolly(void);
void deny(void);

int main(void) {
	int i;
	for(i = 0; i < 3; i++) {
		jolly();
	}
	deny();

	getchar();
	return 0;
}

void jolly(void) {
	printf("For he's a jolly good fellow!\n");
}

void deny(void) {
	printf("Which nobody can deny!\n");
}