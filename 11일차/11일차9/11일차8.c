// ���α׷� ����: ���������� �ڵ������� ������ ����
#include <stdio.h>

void Call_Static(); // �Լ�����1
void Call_Auto(); // �Լ�����2

int main(void)
{
	// ��������
	int i; // �����

	for (i = 1; i <= 5; i++) 
	{
		Call_Static(); // �Լ�ȣ��1
		Call_Auto(); // �Լ�ȣ��2
	}

	return 0; // ��������
}

void Call_Static() // �Լ�����1
{
	static int count = 0; // ��������: �޸𸮿� �� �� �ʱ�ġ�� �Ҵ��ϸ� ���α׷��� ����� ������ ����� ���� ������ (�ڵ������� ���Ǵ� ����)
	printf("\"%d\"��° ȣ��� ", count+=1); 
}

void Call_Auto() // �Լ�����2
{
	auto int number = 1;  // �ڵ�����: �޸𸮿� �ʱ�ġ�� �Ҵ�Ǿ ���α׷��� ����Ǹ� ����� ���� �ҽǵ� => C ����� Ư¡: �޸𸮿뷮 ���డ��
    printf("Number�� ���� \"%d\"�Դϴ�.\n\n", number+=1);  
}