#include <stdio.h>

int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			if (i == 2) printf("%d", i);
			else printf(" + %d", i);
			sum += i;
		}
	}
	printf(" = %d", sum);
}