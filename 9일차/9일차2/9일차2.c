// ���α׷� ����: ���ڸ� �ﰢ�� ���·� ���
#include <stdio.h>

int main(void)
{
	// ��������
	int row = 0;
	int print = 0;

	// �ڷ�ó�� �� ���
	for (row = 1; row <= 10; row++) // �ܺ� for��: ��� �� �� ����
	{
		for (print = 1; print <= (2 * row - 1); print += 2) // ���� for��: ��� ���� �� ���� (���ǽ��� ��� �� ���� ���� ������ ��Ÿ���� ���� �ٽ�)
			printf("%2d ", print);
		printf("\n");
	}

	return 0; // ��������
}
// �ٸ����: for(i=1; i<=20; i+=2) -> for(j=1; j<=i; j+=2)