#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;

	printf("�Ҽ� �Ǻ��� ���ڸ� �Է��Ͻʽÿ�: ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++) // ���ǽĿ��� i==num�� ������ �ݺ��� ����
		if (num % i == 0)
			break;
	if (num == i)
		printf("�Ҽ�\n");
	else
		printf("�Ҽ� �ƴ�\n");

	return 0;
}
// ���� Ǯ� �����غ���
// 1�� �Ҽ��ƴ�

// do while������ do�� 1���� ����