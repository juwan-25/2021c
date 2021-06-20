#include <stdio.h>

void main(void)
{
	int value;

	for (int i = 1; i <= 9; i++)
	{
		if (i == 4)
			break;
		
		for (int j = 1; j <= 9; j++)
		{
			if (j == 5)
				break;
			
			value = i * j;

			printf("%d * %d = %d \n", i, j, value);
		}
	}
}