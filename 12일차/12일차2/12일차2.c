// ���α׷� ����: ����� ���ڿ��� �Ųٷ� ���
#include <stdio.h>

void Reverse(char string[], int num); // �Լ�����

int main(void) // main�Լ��� ����
{
	// ��������
	char string[] = "tomato"; // �Էº���: �Ųٷ� ����� ��� ���ڿ�
	int num = 0; // ���ڿ��� �����ϰ� �ִ� ������ ����

	// ������
	num = sizeof(string)/sizeof(char); // ���ڿ��� �����ϰ� �ִ� ������ ������ ���� 
	printf("�ش� ���ڿ��� \"%d��\"�� ���ڻ���� �����Ǿ��ֽ��ϴ�.\n", num); // ���ڿ��� NULL������ ������ ����
	Reverse(string, num); // �Լ�ȣ��

	return 0; // ��������
} // main�Լ��� ����

void Reverse(char string[], int num) // �Լ�����: �ڷ�ó�� => main�Լ��� string, num�� ���� ���޹޾� ó�� �� ������� ��ȯ
{
	int i = 0; // �����: for�� ����
	for (i=num-2; i>=0; i--) 
		putchar(string[i]);
} 
// 1) �ʱ�ȭ�� "i=num-2"�� ����: string[0]='t', string[1]='o', string[2]='m', string[3]='a', string[4]='t', string[5]='o', string[6]='\0'    
// ���⼭ i�� ���ڿ��� ������ �ǹ��ϹǷ� i�� 7�� (NULL���� �����ϱ� ����) => ���� "i-2"�� '5'�̰� �̴� ���������� ���ڿ��� ������ ������ 'o'�� �ǹ���
