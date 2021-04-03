#include <stdio.h>

void main()

{

	int x = 0, y = 0;
	printf("점의좌표x,y)?");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1사분면에있습니다");
	}
	else if (x < 0 && y > 0) {
		printf("2사분면에있습니다");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면에있습니다");
	}
	else if (x > 0 && y < 0) {
		printf("4사분면에있습니다");
	}
	else if (x = 0) {
		printf("x축에있습니다");
	}
	else {
		printf("y축에있습니다");
	}

}
