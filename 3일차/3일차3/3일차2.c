// ���α׷� ����: �����µ��� ȭ���µ��� ��ȯ
#include <stdio.h>

int main(void) // main�Լ� ����
{
	// ��������
	int celcius = 0;
	float ferenheit = 0.0F;

	// �ڷ��Է� 
	printf("�����µ��� �Է����ֽʽÿ�: ");
	scanf_s("%d", &celcius, sizeof(celcius));

	// �ڷ�ó��
	ferenheit = (celcius*1.8) + 32; // 1.8�̹Ƿ� �Ҽ� ù°�ڸ������� �ϸ�� => �̷� ���� �ƴ� ���� �ſ� �߿�!

	// ������ 
	printf("�Է��� �����µ� \"%d��\"�� ȭ���µ� \"%.1f��\"�Դϴ�.\n\n", celcius, ferenheit);

	return 0; // ��������
} // main�Լ� ����