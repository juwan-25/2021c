#include <stdio.h>

void main(void)
{
	int score;

	printf("������ �Է��ϼ���.\n");
	printf("���� : ");
	scanf_s("%d", &score);

	printf("��� : ");

	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else
		printf("D");
}