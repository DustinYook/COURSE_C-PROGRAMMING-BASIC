// ���α׷� ����: ��ũ�λ���� ���� �н�
#include <stdio.h>
#include <math.h> // pow�Լ��� ����ϱ� ���� �������
#define PI 3.14 // ��ũ�λ��1: 3.14��� ��������� PI�� ��ü
#define Area(P,R,N) P*pow(R,N) // ��ũ�λ��2: P*pow(R,N)�̶�� ������ Area��� �Լ��� ����

int main(void) // main�Լ� ����
{
	// ��������
	double radius = 0.0;
	
	// �ڷ��Է� �� ó��, ������
	printf("�������� ���̸� �Է����ֽʽÿ�: ");
	scanf_s("%lf", &radius);
	printf("���� ���̴� %.2lf�Դϴ�.\n\n", Area(PI,radius,2));

	return 0; // ��������
} // main�Լ� ����