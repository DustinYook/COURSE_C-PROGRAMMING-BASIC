// ���α׷� ����: �� ���� �� ���� ū �� ��� (if~else if�� ����)
#include <stdio.h>

int main(void) // main�Լ� ����
{
	// ��������
	int num1, num2, num3; // �Է��ڷ�: �� ���� �Է�
	int max = 0;

	while (1) // ���ǹ��� '1(��)'�̹Ƿ� ���ѷ��� ����
	{
		// �ڷ��Է�
		printf("���� �ٸ� �� ������ �Է����ֽʽÿ�: ");
		scanf_s("%d %d %d", &num1, &num2, &num3);
		
		// �Է±�Ģ �ؼ����� �Ǵ�
		if (!(num1==num2) && !(num1 == num3) && !(num2==num3))
			break; // �Է±�Ģ �ؼ� �� ���ѷ��� Ż��
		printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n\a\a\a\a");
	}

	// �ڷ�ó�� �� ���
	if (num1 > num2 && num1 > num3)
		max = num1;
	else if (num2 > num3) // ����: num2���� num3�� ũ�ų�, num2���� num1�� ŭ
		max = num2;
	else // ����: num1���� num2�� ũ�ų�, num1���� num3�� ŭ
		max = num3;
	printf("�Է��Ͻ� �� ���� �� ���� ū ���� \"%d\"�Դϴ�.\n\n", max);	

	return 0; // ��������
} // main�Լ� ����