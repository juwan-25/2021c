#include <stdio.h>

int main()
{
	int n = 0;

	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &n);


	printf("5를 왼쪽으로 %d만큼 shift하면 %d 입니다.", n, 5 << n);

	return 0;
}