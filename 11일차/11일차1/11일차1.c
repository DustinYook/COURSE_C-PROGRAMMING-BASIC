// ���α׷� ����: �簢���� ���ο� ������ ���̸� �Է¹ް� ������ ���
#include <stdio.h>

int Rectangle_Area(int width, int length); // �Լ�����

int main(void) // main()�Լ� ����
{
	// ��������
	int num1 = 0, num2 = 0; // �Էº���

	// �ڷ��Է�
	printf("���̸� ���� �簢���� ���ο� ������ ���̸� ���ʷ� �Է����ֽʽÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	// ������
	printf("���ο� ���ΰ� ���� \"%d\", \"%d\"�� �簢���� ���̴� \"%d\"�Դϴ�.\n\n", num1, num2, Rectangle_Area(num1, num2)); // �Լ�ȣ��

	return 0; // ��������
} // main()�Լ� ����

int Rectangle_Area(int width, int length) // �Լ�����
{
	int result = width * length; // num1->width, num2->length�� �μ����� ���޵Ǿ� �ڷ�ó�� ����
	return result; // �ڷ�ó�� ������� �Լ�ȣ�� �κп� ��ȯ
}
