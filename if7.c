#include <stdio.h>
int main () {
	int son1, son2;
	printf("sonni kiriting: ");
	scanf("%d", &son1);
	printf("sonni kiriting: ");
	scanf ("%d", &son2);
	if (son1 < son2) {
		printf("1chi %d\n", son1);
	}else {
		printf("1chi %d\n", son2);
	}
	return 0;
}
