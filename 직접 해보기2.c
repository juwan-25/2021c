#include <stdio.h>

void main(void)
{
	int a;

	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &a);

	printf(a > 10 ? "숫자 %d은(는) 10보다 큽니다." :"" ,a);

	printf(a == 10 ? "숫자 %d은(는) 10입니다." : "", a);

	printf(a < 10 ? "숫자 %d은(는) 10보다 작습니다." : "", a);
}