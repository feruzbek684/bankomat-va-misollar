#include <stdio.h>
int main () {
	int a, b;
	printf("sonni kiriting: ");
	scanf("%d", &a);
	printf("sonni kiriting: ");
	scanf("%d", &b);
	if (a !=b ) {
		a = a + b;
	}else if (a == b) {
		a = 0;
	}
	printf("%d\n", a);
	return 0;
}
