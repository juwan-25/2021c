#include <stdio.h>

int main(void)
{
	int n, a, sum = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			if (i == 1) printf("%d", i);
			else printf("+ %d", i);
			a = i;
		}
		else {
			printf("- %d", i);
			a = -i;
		}
		sum += a;
	}
	printf(" = %d", sum);
}