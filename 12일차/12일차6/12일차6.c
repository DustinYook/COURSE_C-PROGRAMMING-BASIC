#include <stdio.h> // call by reference

void Swap(int* a, int* b); 

int main(void)
{
	int x = 10, y = 5; // x=100����, y=200����

	printf("Swap()�Լ� ���� ��: ");
	printf("x = %d, y = %d�̴�.\n\n", x, y);

	Swap(&x, &y); // �Լ�ȣ��: ����������Լ��� �ּҰ��� ����
	printf("Swap()�Լ� ���� ��: ");
	printf("x = %d, y = %d�̴�.\n\n", x, y);

	return 0;
}

void Swap(int* a, int* b) // a�� 100����, b�� 200���� ���� => �ּҰ� ���� 
{
	int temp = *a; // temp������ 100������ ����� '10'�� ���� ����
	*a = *b; // x������ y�� ����� �� '5'�� �Ҵ�
	*b = temp;
	printf("Swap()�� a = %d, b = %d�̴�.\n\n", a, b);
}
