// ���α׷� ����: ������ �ݺ��ؼ� �����ϰ� �� ����� ���
#include <stdio.h>

int main(void) // main�Լ� ����
{
	// ��������
	int i = 0, j = 0; // �����
   
	for (i = 1; i <= 5; i++) // �ܺ� for��
	{
		for (j = 1; j <= 3; j++) // ���� for�� 
			printf("%2d + %2d = %2d |", j, i, i+j);
		printf("\n");
	}

	return 0; // ��������
} // main�Լ� ����