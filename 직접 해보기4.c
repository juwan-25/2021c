#include <stdio.h>

int main()
{
	int n = 0;

	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &n);


	printf("5�� �������� %d��ŭ shift�ϸ� %d �Դϴ�.", n, 5 << n);

	return 0;
}