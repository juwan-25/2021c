#include <stdio.h>

void main(void)
{
	int C, java, computer;

	printf("C���, �ڹ�, ��ǻ�ͱ����� ������ �Է��ϼ���.\n");
	printf("C���, �ڹ�, ��ǻ�ͱ��� : ");
	scanf_s("%d, %d, %d", &C, &java, &computer);

	if (C >= 90)
		printf("C��� : A, ");
	else if (C >= 80)
		printf("C��� : B, ");
	else if (C >= 70)
		printf("C��� : C, ");
	else
		printf("C��� : D, ");

	if (java >= 90)
		printf("�ڹ� : A, ");
	else if (java >= 80)
		printf("�ڹ� : B, ");
	else if (java >= 70)
		printf("�ڹ� : C, ");
	else
		printf("�ڹ� : D, ");

	if (computer >= 90)
		printf("��ǻ�ͱ��� : A");
	else if (computer >= 80)
		printf("��ǻ�ͱ��� : B");
	else if (computer >= 70)
		printf("��ǻ�ͱ��� : C");
	else
		printf("��ǻ�ͱ��� : D");
}