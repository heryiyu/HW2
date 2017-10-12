#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a = 1,b;
	while (a != -1)
	{
		printf("Enter sales in dollars (-1 to end) :");
		scanf_s("%f",&a);
		if (a != -1)
		{
			b = 200 + (a*0.09);
			printf("salary is:\t%0.2f\n",b);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}