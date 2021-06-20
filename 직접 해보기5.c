#include <stdio.h>

void main(void)
{
	int score;

	printf("점수를 입력하세요.\n");
	printf("점수 : ");
	scanf_s("%d", &score);

	printf("등급 : ");

	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else
		printf("D");
}