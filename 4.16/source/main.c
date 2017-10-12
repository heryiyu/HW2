#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,k;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		printf(" ");
		for (j= 0;j < i; j++)
		{
			printf("%s","*");
		}
		printf("\n");

	}

	printf("\n(B)\n");
	for (i = 0; i < 10; i++)
	{
		printf(" ");
		for (j = 0; j < 10-i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");

	}


	printf("\n(C)\n");
	for (i = 0; i < 10; i++)
	{
		printf(" ");
		for (k = 0; k < i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < 10 - i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");

	}


	printf("\n(D)\n");
	for (i = 0; i < 10; i++)
	{
		printf(" ");
		for (k = 0; k <9-i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < i+1; j++)
		{
			printf("%s", "*");
		}
		printf("\n");

	}


	printf("\n");
	system("pause");
	return 0;
}