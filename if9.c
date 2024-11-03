#include <stdio.h>
int main () {
	int a, b, c = 0;
	printf("sonni kiriting: ");
	scanf("%d", &a);
	printf("sonni kiriting: ");
	scanf("%d", &b);
	if (a > b) {
		c = a;
		a = b;
		b = c;
	}
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;	
}
