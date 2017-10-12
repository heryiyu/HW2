#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j,z;
	int b = -2;
	printf("\n");
	for (i = -4; i<=4; i++)
	{
		printf("  ");
		if (i < 0)
			z = (-1)* i;
		else
			z = i;

		for (j =0; j <z; j++)
		{
			printf(" ");
		}

		for (j = 0; j <(b * z) + 9; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}