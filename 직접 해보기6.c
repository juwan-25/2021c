#include <stdio.h>

void main(void)
{
	int C, java, computer;

	printf("C언어, 자바, 컴퓨터구조의 점수를 입력하세요.\n");
	printf("C언어, 자바, 컴퓨터구조 : ");
	scanf_s("%d, %d, %d", &C, &java, &computer);

	if (C >= 90)
		printf("C언어 : A, ");
	else if (C >= 80)
		printf("C언어 : B, ");
	else if (C >= 70)
		printf("C언어 : C, ");
	else
		printf("C언어 : D, ");

	if (java >= 90)
		printf("자바 : A, ");
	else if (java >= 80)
		printf("자바 : B, ");
	else if (java >= 70)
		printf("자바 : C, ");
	else
		printf("자바 : D, ");

	if (computer >= 90)
		printf("컴퓨터구조 : A");
	else if (computer >= 80)
		printf("컴퓨터구조 : B");
	else if (computer >= 70)
		printf("컴퓨터구조 : C");
	else
		printf("컴퓨터구조 : D");
}