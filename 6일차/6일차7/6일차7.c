// ���α׷� ����: �� ���� �ǿ����ڸ� ��������ϴ� ���� 
#include <stdio.h>

int main(void)
{
	// ��������
	int num1 = 0, num2 = 0; // �Էº���: �ǿ�����
	char operate = 'a'; // �Էº���: ������
	int result = 0; // ��º���: ������

					// �ڷ��Է�
IN:
	printf("������ �ǿ����ڰ� 2���� ������� �ۼ����ּ���: ");
	scanf_s("%d %c %d", &num1, &operate, sizeof(operate), &num2);

	// �ڷ�ó��
	if (operate == '+')
		result = num1 + num2;
	else if (operate == '-')
		result = num1 - num2;
	else if (operate == '*')
		result = num1 * num2;
	else if (operate == '/')
		result = num1 / num2;
	else
	{
		printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ּ���.\n\n");
		goto IN;
	}

	// ������
	printf("%d %c %d = %d\n\n", num1, operate, num2, result);

	return 0; // ��������
}