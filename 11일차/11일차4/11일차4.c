// ���α׷� ����: ������ü �� ���� ���̸� �Է¹ް� ǥ������ ���Ǹ� ���
#include <stdio.h>
#include <math.h> // pow()�Լ��� ����ϱ� ���� ��ó����

int Cube_Area(int a); // �Լ�����1
int Cube_Volume(int a); // �Լ�����2

int main(void) // main()�Լ� ����
{
	// ��������
	int length = 0; // �Էº���: ������ü �� ���� ����

	// �ڷ��Է�
	printf("������ü�� �Ѻ��� ���̸� �Է����ֽʽÿ�: ");
	scanf_s("%d", &length);

	// ������
	printf("������ü�� ǥ������ \"%d\"�̰� ���Ǵ� \"%d\"�Դϴ�.\n\n", Cube_Area(length), Cube_Volume(length)); // �Լ�ȣ��

	return 0; // ��������
} // main()�Լ� ����

int Cube_Area(int length) // �Լ�����1
{
	int result = 6 * pow(length, 2); // ǥ������ ���ϱ� ���� ó������ 
	return result; // ����� ��ȯ
}

int Cube_Volume(int length) // �Լ�����2
{
	int result = pow(length, 3); // ���Ǹ� ���ϱ� ���� ó������
	return result; // ����� ��ȯ
}