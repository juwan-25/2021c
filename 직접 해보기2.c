#include <stdio.h>

void main(void)
{
	int a;

	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &a);

	printf(a > 10 ? "���� %d��(��) 10���� Ů�ϴ�." :"" ,a);

	printf(a == 10 ? "���� %d��(��) 10�Դϴ�." : "", a);

	printf(a < 10 ? "���� %d��(��) 10���� �۽��ϴ�." : "", a);
}