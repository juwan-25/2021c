#include <stdio.h>

void main(void)
{
	int a;

	printf("���ڸ� �Է��Ͻÿ�.\n");
	scanf_s("%d", &a);

	printf(a > 10 && a < 20 ?"%d��(��) 10���� ũ�� 20���� �۽��ϴ�." : "%d��(��) ���ǿ� �������� �ʽ��ϴ�.", a, a);
}