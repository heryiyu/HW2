#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1;
	float h,m,t, sum;
	printf("計算週薪\n\n");

	printf("請輸入您的職位代碼(輸入 -1 結束程式):\n");
	printf("1.經理人員\n2.時薪工\n3.抽佣金\n4.零工\n");
	printf("\n");
	scanf_s("%d", &i);

	while (i != -1)
	{
		switch (i)
		{
		case 1:
			printf("您的週薪是 7000\n\n");
			break;
		case 2:
			printf("請問您這週工作幾小時:");
			scanf_s("%f",&h);
			if (h > 40)
			{
				sum = 40 * 135 + (h - 40) * 135 * 1.5;
				printf("您的週薪是 %f\n\n", sum);
			}
			else
			{
				sum = 135 * h;
				printf("您的週薪是 %f\n\n", sum);
			}
			break;
		case 3:
			printf("請問您這週銷售金額是多少:");
			scanf_s("%f", &m);
			sum = 250 + m*0.057;
			printf("您的週薪是 %f\n\n",sum);
			break;
		case 4:
			printf("請問您這週生產多少件東西:");
			scanf_s("%f", &t);
			sum = t * 20;
			printf("您的週薪是 %f\n\n",sum);
			break;
		default:
			printf("輸入錯誤選項\n\n");
			break;
		}
		printf("請輸入您的職位代碼(輸入 -1 結束程式):\n");
		printf("1.經理人員\n2.時薪工\n3.抽佣金\n4.零工\n");
		printf("\n");
		scanf_s("%d", &i);
	}

	printf("\n");
	system("pause");
	return 0;
}