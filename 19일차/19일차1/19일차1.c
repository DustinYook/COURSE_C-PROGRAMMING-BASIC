#include <stdio.h>

int main(void)
{
	int i = 0, j = 0; // i�� ��, j�� ��
	int seat[6][6];
	int n = 0; // 1,2,3,4,...
	int sw = 1; // ����ġ

	for (i = 1; i <= 5; i++) // ������ ����
	{
		if (sw == 1)
		{
			for (j = 1; j <= 5; j++) // �� ���� ����
			{
				n++;
				seat[i][j] = n;
			}
			sw = 0;
		}
		else
		{
			for (j = 5; j >= 1; j--) // �� ���� ����
			{
				n++;
				seat[i][j] = n;
			}
			sw = 1;
		}
	}

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("%4d", seat[i][j]);
		printf("\n");
	}
	
	return 0;
}