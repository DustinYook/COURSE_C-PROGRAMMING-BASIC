#include <stdio.h>

int Sum2(int* ptr, int size); // �Լ�����2

int Sum2(int* ptr, int size) // �Լ�����2: �ڷ�ó��
{ // main�Լ��� �迭 a�� �����ּҸ� ����������Լ��� �����ͺ��� ptr�� �����ϰ�, �迭ũ���� ���� size�� ����
	int result = 0; // ��º���
	int i = 0; // �����
	for (i = 0; i < size; i++) // ������ "size��"��ŭ �ݺ�
	{
		printf("result�� �� = %d vs (*ptr)++�� �� = %d\n", result, (*ptr)++);
		result = result + *ptr++; // result ���尪 ��ȭ: 0+
	}

	return result; // ����� ��ȯ
}

