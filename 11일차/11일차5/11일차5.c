// ���α׷� ����: �Ҽ��� ����� ������ �̿��Ͽ� �Ǻ�
#include <stdio.h>

int Prime(int a); // �Լ�����

int main(void) // main()�Լ��� ����
{
	// ��������
	int num = 0;

	// �ڷ��Է�
	printf("������ ������ �Է����ֽʽÿ�: ");
	scanf_s("%d", &num);

	// ������
	(Prime(num) == 1) ? printf("�Է��Ͻ� ���� �Ҽ��Դϴ�.\n\n") : printf("�Է��Ͻ� ���� �Ҽ��� �ƴմϴ�.\n\n");

	return 0; // ��������
} // main()�Լ��� ����

// �Լ�����
int Prime(int input) 
{
	int i = 0; // �����
	int divisor_num = 0; // ó������: ����� ����
	int result = 0; // ��ȯ����

	for (i = 1; i <= input; i++)
	{
		if (input % i == 0)
			divisor_num++; // ������ �������� �������� �� ���������� ����� ������ '1' ������Ŵ
	}

	result = (divisor_num == 2) ? 1 : 0; // ����� ������ 2���̸�, ��, �Ҽ��̸� '1', �Ҽ��� �ƴϸ� '0'�� ���� ��ȯ
	return result;
}