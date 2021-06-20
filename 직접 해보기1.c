#include <stdio.h>

void main(void)
{
	int a;

	printf("숫자를 입력하시오.\n");
	scanf_s("%d", &a);

	printf(a > 10 && a < 20 ?"%d은(는) 10보다 크고 20보다 작습니다." : "%d은(는) 조건에 부합하지 않습니다.", a, a);
}