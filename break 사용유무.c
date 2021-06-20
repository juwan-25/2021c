#include <stdio.h>

void main(void)
{
	int a;

	printf("정수 입력 : ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1: printf("%d은(는) 1입니다.\n", a);
		break;
	case 2: printf("%d은(는) 2입니다.\n", a);
		break;
	default: printf("1 또는 2를 입력하세요.\n");
		break;
	}

	printf("------------------\n");

	switch (a)
	{
	case 1: printf("%d은(는) 1입니다.\n", a);
	case 2: printf("%d은(는) 2입니다.\n", a);
	default: printf("1 또는 2를 입력하세요.\n");
	}
}