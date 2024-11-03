#include <stdio.h>
int main () {
	int a;
	printf("sonni kiriting: ");
	scanf("%d", &a);
	if (a > 0) {
		a = a + 1;
		printf("%d\n", a);
	}else if (a < 0) {
		a = a - 2;
		printf("%d\n", a);
	}
	return 0;
}
