#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1;
	float h,m,t, sum;
	printf("�p��g�~\n\n");

	printf("�п�J�z��¾��N�X(��J -1 �����{��):\n");
	printf("1.�g�z�H��\n2.���~�u\n3.�����\n4.�s�u\n");
	printf("\n");
	scanf_s("%d", &i);

	while (i != -1)
	{
		switch (i)
		{
		case 1:
			printf("�z���g�~�O 7000\n\n");
			break;
		case 2:
			printf("�аݱz�o�g�u�@�X�p��:");
			scanf_s("%f",&h);
			if (h > 40)
			{
				sum = 40 * 135 + (h - 40) * 135 * 1.5;
				printf("�z���g�~�O %f\n\n", sum);
			}
			else
			{
				sum = 135 * h;
				printf("�z���g�~�O %f\n\n", sum);
			}
			break;
		case 3:
			printf("�аݱz�o�g�P����B�O�h��:");
			scanf_s("%f", &m);
			sum = 250 + m*0.057;
			printf("�z���g�~�O %f\n\n",sum);
			break;
		case 4:
			printf("�аݱz�o�g�Ͳ��h�֥�F��:");
			scanf_s("%f", &t);
			sum = t * 20;
			printf("�z���g�~�O %f\n\n",sum);
			break;
		default:
			printf("��J���~�ﶵ\n\n");
			break;
		}
		printf("�п�J�z��¾��N�X(��J -1 �����{��):\n");
		printf("1.�g�z�H��\n2.���~�u\n3.�����\n4.�s�u\n");
		printf("\n");
		scanf_s("%d", &i);
	}

	printf("\n");
	system("pause");
	return 0;
}