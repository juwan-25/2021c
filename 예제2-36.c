#include <stdio.h>

int main()
{
	int a, sum = 0;

	for (a = 1; a <= 5; a++)
		sum = sum + a;
	
	printf("%d \n", sum);

	return 0;
}