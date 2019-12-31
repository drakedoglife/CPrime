#include <stdio.h>

int squareFunc(int num);
int cubicFunc(int num);

int main(void) {
	int toes = 10;
	printf("origin_toes: %d\n", toes);
	printf("square_toes: %d\n", squareFunc(toes));
	printf("cubic_toes: %d\n", cubicFunc(toes));

	getchar();
	return 0;
}

int squareFunc(int num) {
	return num * num;
}

int cubicFunc(int num) {
	return num * num * num;
}