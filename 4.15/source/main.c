#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int years;
	float rate,i;
	float investment;
	for (i = 10;i<=12;i+=0.5)
	{
		rate= i/100;
		investment = 5000;
		for (years = 0; years < 15; years++)
		{
			investment=investment*(1+rate);
		}
		printf("5000元 investment rates is %f\% 經過 15 years 錢變成 %f\n",i,investment );
	}

	printf("\n");
	system("pause");
	return 0;
}