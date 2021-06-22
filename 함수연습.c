#include <stdio.h>

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	int result = sum(a, b);
	
	printf("%d\n", result);
}

int sum(num1, num2)
{
	int sum;
	sum = num1 + num2;

	return sum;
}