#include <stdio.h>
int main () {
	int son1, son2, son3, musbat;
	printf("sonni kiriting: ");
	scanf("%d", &son1);
	printf("sonni kiriting: ");
	scanf("%d", &son2);
	printf("sonni kiriting: ");
	scanf("%d", &son3);
	if(son1 > 0) {
		musbat ++;
	}if (son2 > 0) {
		musbat ++;
	}if (son3 > 0) {
		musbat ++;
	}
	printf("musbat sonlar %d\n", musbat);
	
	return 0;
}
