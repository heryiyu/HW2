#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, i,j;
	printf("enter length and breadgh:");
	scanf_s("%d %d", &a, &b);
	for (i = 0; i < a; i++)
	{
		printf("  +");
		if (i == 0 || i == a - 1)
		{
			for (j = 0; j < b-2; j++)
				printf("+");
		}
		else
		{
			for (j = 0; j < b - 2; j++)
				printf(" ");
		}
		printf("+\n");
	}
	printf("\n");
	system("pause");
	return 0;
		
}