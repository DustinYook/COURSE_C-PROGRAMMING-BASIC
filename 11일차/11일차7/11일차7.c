#include <stdio.h>

void StarPrint(int row);

int main(void)
{
	int row = 0; // �Էº���: �� ��

	printf("����� ���ϴ� �� ���� �������·� �Է����ֽʽÿ�: ");
	scanf_s("%d", &row);

	return 0;
}

void StarPrint(int row)
{
	int i = 0; // �����1: ����� �� �� ����
	int j = 0; // �����2: ����� ���ڼ� ����
	int k = 0;

	// ��� �ﰢ�� ���
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i-1; j++) // ��������
			printf(" ");
		for (k = 1; k <= (i*2)-1; k++)
			printf("*");
		printf("\n");
	}
	// �Ϻ� �ﰢ�� ���
	for (i = 1; i <= row; i++)
}

