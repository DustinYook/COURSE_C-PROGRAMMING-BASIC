// ���α׷� ����: �ǿ����ڰ� 2���� ��Ģ���� ����
#include <stdio.h>

int main(void)
{
	// ��������
	int num1 = 0, num2 = 0; // �Էº���: �ǿ�����
	int result = 0; // ��º���: ������
	char operate = 'a'; // �Էº���: ������

						// �ڷ��Է� �� ó��
IN:
	printf("������ �ǿ����ڰ� 2���� ������� �ۼ����ּ���: ");
	scanf_s("%d %c %d", &num1, &operate, sizeof(operate), &num2);

	switch (operate)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
	{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �� �� �Է��� �ֽʽÿ�.\n\n");
		printf("\a\a\a\a\a\a\a\a\a\a");
		goto IN;
	}
	}

	// �ڷ����
	printf("%d %c %d = %d\n\n", num1, operate, num2, result);

	return 0; // ��������
}