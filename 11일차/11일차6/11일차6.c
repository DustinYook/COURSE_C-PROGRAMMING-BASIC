// ���α׷� ����: ����� �� ���� �Է¹ް� �̸� ������� ���̾Ƹ�� ���¸� ���
#include <stdio.h>

void Star_Print(int input); // �Լ�����

int main(void) // main()�Լ��� ����
{
	// ��������
	int row = 0; // �Էº���: �� ��

	// �ڷ��Է�
	printf("�� �� ������� �Է����ֽʽÿ�: ");
	scanf_s("%d", &row);

	// ������
	Star_Print(row); // �Լ�ȣ��

	return 0; // ��������
} // main()�Լ��� ����

// �Լ�����
void Star_Print(int row)
{
	int i = 0; // �����1: ����� �� ����
	int j = 0; // �����2: ���鹮�� ����
	int k = 0; // �����3: ��¹��� ����
	
	// ��� �ﰢ��
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= 2*(row-i); j++) // �ٸ� ���: (j=2*i-2 ; j<=2*row-2 ; j++) // for (j = 2*i; j <= 2*row; j++)
			printf(" ");
		for (k = 1; k <= 2*i-1; k++)
			printf("* ");
		printf("\n"); // �� �ٿ� ��� ��� �� ����
	}

	// �Ϻ� �ﰢ��
	for (i = 2; i <= row; i++) 
	{
		for (j = 1; j <= 2*i-2; j++)
			printf(" ");
		for (k = 1; k <= 2*(row-i)+1; k++) 
			printf("* ");
		printf("\n"); // �� �ٿ� ��� ��� �� ����
	}

	printf("\n"); // ������ ���Ṯ�� ����
}