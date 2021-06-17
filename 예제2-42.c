#include <stdio.h>

int main()
{
	int i, sum = 0;

	for (i = 1; i <= 5; i++)
	{
		sum = sum + i;
		if (sum >= 10) break;
	}

	printf("i=%d, sum=%d\n", i, sum);

	return 0;
}