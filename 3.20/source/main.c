#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=1;
	float b,c;
	while (a != -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d",&a);
		if (a != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f",&b);

			if (a <= 40)
				c = a*b;
			else
				c = 40 * b + (a - 40) * b*1.5;
			printf("salary is $%f", c);
		}
		printf("\n\n");
	}

	printf("\n");
	system("pause");
	return 0;
}