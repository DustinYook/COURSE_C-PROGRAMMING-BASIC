// ���α׷� ����: �ڷ����� ǥ������
#include <stdio.h>
#include <math.h>

int main(void)
{
	// ��������
	signed short a, b; // signed: ���� signed�� ����
	unsigned short c;
    
	// �ڷ�ó��
	a = pow(2, 15) - 1; 
	b = pow(2, 15); // ǥ�� ������ �ʰ��Ͽ� overflow �߻�
	c = pow(2, 15);

	// ������
	printf("a�� ���� %d�̴�.\n", a);
	printf("b�� ���� %d�̴�.\n", b);
	printf("c�� ���� %d�̴�.\n\n", c);

	return 0; // ��������
}

// short�� 2����Ʈ�̹Ƿ� 16��Ʈ => ǥ������: signed(-2^15~2^15-1) vs unsigned(0~2^16-1)