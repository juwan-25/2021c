#include <stdio.h>

void main(void)
{
	int arr[4];

	printf("%p\n", &arr[0]); //0��° ���� �ּ�
	printf("%p\n", arr); //�迭 ���� �ּ�
	printf("%p\n\n", &arr[1]);
	
	char str[4];

	printf("%p\n", &str[0]);
	printf("%p\n", str);
	printf("%p\n", &str[1]);
}