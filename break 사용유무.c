#include <stdio.h>

void main(void)
{
	int a;

	printf("���� �Է� : ");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1: printf("%d��(��) 1�Դϴ�.\n", a);
		break;
	case 2: printf("%d��(��) 2�Դϴ�.\n", a);
		break;
	default: printf("1 �Ǵ� 2�� �Է��ϼ���.\n");
		break;
	}

	printf("------------------\n");

	switch (a)
	{
	case 1: printf("%d��(��) 1�Դϴ�.\n", a);
	case 2: printf("%d��(��) 2�Դϴ�.\n", a);
	default: printf("1 �Ǵ� 2�� �Է��ϼ���.\n");
	}
}