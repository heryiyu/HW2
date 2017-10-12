#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int side1, side2, hypotenuse;
	printf("所有小於500的整數的畢氏定理\n");
	printf("side1\tside2\thypotenuse\n");
	for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (side1 = 1; side1 <= 500; side1++)
			{
				if (side1*side1 + side2*side2 == hypotenuse*hypotenuse)
				{
					if (side2>side1)
					printf("%d\t%d\t%d\n",side1,side2,hypotenuse);
				}
			}
		}
	}

	printf("\n");
	system("pause");
	return 0;
}