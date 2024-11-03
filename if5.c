#include <stdio.h>
int main () {
	int son1, son2, son3, musbat = 0, manfiy = 0;
	printf("sonni kiriting: ");
	scanf("%d", &son1);
	printf("sonni kiriting: ");
	scanf("%d", &son2);
	printf("sonni kiriting: ");
	scanf("%d", &son3);
	if(son1 > 0) {
		musbat ++;
	}else if (son1 < 0) {
		manfiy ++;
	}if (son2 > 0) {
		musbat ++;
	}else if (son2 < 0) {
		manfiy ++;
	}
	if (son3 > 0) {
		musbat ++;
	}else if (son3 < 0) {
		manfiy ++;
	}
	
	printf("musbat sonlar %d\n", musbat);
	printf("manfiy sonlar %d\n", manfiy);
	return 0;
}
