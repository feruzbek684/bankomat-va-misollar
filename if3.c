#include <stdio.h>
int main () {
	int son;
	printf("sonni kiriting: ");
	scanf("%d", &son);
	if(son > 0) {
		son = son + 1;
		printf("%d\n", son);
	}else if(son == 0) {
		son = 10;
		printf("%d\n", son);
	}
	else {
		son = son - 2;
		printf("%d\n", son);
	}

	return 0;
}
