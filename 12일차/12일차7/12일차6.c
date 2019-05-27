// ���α׷� ����: Call by Value�� Call by Reference�� ������
#include <stdio.h>

void Increment1(int n); // �Լ�����1
void Increment2(int *n); // �Լ�����2

int main(void) // main�Լ� ����
{
	// ��������
	int a = 0;

	// �ڷ�ó�� �� ���1
	printf("a�� �ʱ갪: %d\n\n", a);
	// �ڷ�ó�� �� ���2
	Increment1(a);
	printf("Increment1 ���� �� a�� ��: %d\n\n", a); // a�� '1'�� �ƴ� '0'
	// �ڷ�ó�� �� ���3
	Increment2(&a);
	printf("Increment2 ���� �� a�� ��: %d\n\n", a); // a�� '0'���� '1'�� ����

	return 0; // ��������
} // main�Լ� ����

void Increment1(int n) // a�� ���� n�� ���� (���� ����)
{
	n++; // ���尪 ��ȭ: 0 -> 1 => ����) ��� �����鼭 ��ȿȭ
	printf("Increment1 ������ a��: %d\n", n); 
}

void Increment2(int* n) // a�� �ּҰ��� �����ͺ��� n�� ���� (�ּҰ��� ����)
{
	(*n)++; // n�� ����� �ּҰ��� ����� ���� 1 ���� => ���尪 ��ȭ: 0 -> 1
	printf("Increment2 ������ a��: %d\n", *n);
}
// return: ��������
// �����ͺ���: �������� 
// ��������, ���������� ���� => Call by Value�� Call by Reference�� ���̸� ����� ���� ����