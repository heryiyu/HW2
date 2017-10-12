#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a = 1;
	float b, c, d;
	while (a !=-1)
	{
		
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &a);

		if (a !=-1)
		{
			printf("Enter interest rate:");
			scanf_s("%f", &b);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &c);

			d = (a*b*c) / 365;

			printf("The interest charge is \t$%0.2f", d);
			printf("\n\n");
		}
		
	}

	printf("\n");
	system("pause");
	return 0;
}