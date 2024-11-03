#include <stdio.h>
int main () {
	int son1, son2;
	printf("sonni kiriting: ");
	scanf("%d", &son1);
	printf("sonni kiriting: ");
	scanf("%d", &son2);
	if (son1 > son2) {
		printf("katta %d\n", son1);
		printf("kichik %d\n", son2);
	}else {
		printf("katta %d\n", son2);
		printf("kichik %d\n", son1);
	}
	return 0;
}
