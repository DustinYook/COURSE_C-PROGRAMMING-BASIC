// ���α׷� ����: �Է¹��� 2���� �ǿ����ڸ� ��Ģ�����ϴ� ����
#include <stdio.h>

int main(void)
{
	// ��������
	double operand1 = 0.0, operand2 = 0.0; // �Էº���: �ǿ�����
	double result = 0.0; // ��º���: ������
	char operate = 'a'; // �Էº���: �� 1 ������ (��������ڷ� ����)
	char equal = 'a'; // �Էº���: �� 2 ������ ('='�� ����)

					  // �ڷ��Է� �� �Է±�Ģ �ؼ����� �Ǻ�
	while (1) // ���ǽ��� '1(��)'�̹Ƿ� ���ѷ���
	{
		// �ڷ��Է¹�
		printf("������� �˰���� ���� ��Ģ������� �Է����ֽʽÿ�.\n");
		printf("�Է� ����: 1 + 2 = \n");
		scanf_s("%lf %c %lf %c", &operand1, &operate, sizeof(operate), &operand2, &equal, sizeof(equal));

		// �Է±�Ģ �ؼ���
		if (((operate == '+') || (operate == '-') || (operate == '*') || (operate == '/')) && (equal == '='))
			break;
		// �Է±�Ģ ���ؼ���
		printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n");
		printf("\a\a\a\a\a\a\a\a\a\a\a");
	}

	// �ڷ�ó��
	switch (operate) // ���ڻ���� ������ �����̹Ƿ� switch���� ��밡��
	{
	case '+': // ���� �Է½�
		result = operand1 + operand2; // �������� ����
		break; // �׸��� switch�� Ż��
	case '-': // ���� �Է½�
		result = operand1 - operand2; // �������� ����
		break; // �׸��� switch�� Ż��
	case '*': // ���� �Է½�
		result = operand1 * operand2; // �������� ����
		break; // �׸��� switch�� Ż��
	case '/': // ������ �Է½�
		result = operand1 / operand2; // ���������� ����
		break; // �׸��� switch�� Ż��
	}

	// �ڷ����
	printf("%.2lf %c %.2lf %c %.2lf\n\n", operand1, operate, operand2, equal, result);

	return 0; // ��������
}