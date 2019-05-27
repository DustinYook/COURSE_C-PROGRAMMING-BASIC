// ���α׷� ����: getchar(), putchar(), gets_s(), puts()�� ��� 
#include <stdio.h>

int main(void) // main�Լ� ����
{
	// ��������
	char name[20];
	char input_grade;
	char preset_grade = 'A';

	// �ڷ��Է�1: puts(), gets_s()�Լ� ����Ͽ� ���ڿ� ��� �� �Է� ����
	puts("�̸��� �Է����ֽʽÿ�: "); 
	gets_s(name, sizeof(name)); // name�̶�� ���������� �̸��� �Է¹޾� ���� 
	puts(name); // gets_s()�� ���� name�̶�� ���������� ������ �ڷḦ �ҷ��ͼ� ���
	printf("\n\n");

	// �ڷ��Է�2: putchar(), getchar()�Լ� ����Ͽ� ���ڻ�� ��� �� �Է� ����
	puts("������ �Է����ֽʽÿ�: ");
	input_grade = getchar(); // getchar()�� ���� �Է¹��� ���ڸ� grade��� ���������� ���� 
	// ����) getchar(input_grade);�� ���� ǥ���ϸ� ������ ���� �߻�, �ݵ�� assign('=')�����ڸ� �̿��Ͽ� �Ҵ��ϴ� ���� ���ؾ� ��
	putchar(input_grade);
	printf("\n\n");
	
	// �ڷ����: putchar() �ٷ� ���ڻ���� �־� ����ϴ� ���
	puts("������ �̿����� �ʰ� �ٷ� ���ڻ���� ����ϴ� ���: ");
	putchar('A');
	printf("\n\n");

	return 0; // ��������
} // main�Լ� ����

// puts = put string (���ڿ� ��� ��ɾ�), gets_s = get string (���ڿ� �Է� ��ɾ�)
// puts("���ڿ�"); �Ǵ� puts(������); <=> printf()�� ����
// ����) printf()�� ��� ���� Ŀ�� ������ puts()�� �Ʒ� Ŀ���� ����
// gets_s(������, sizeof(������)); <=> scanf_s()�� ����
// ����) ���⸦ �����ϸ� scanf_s()��� gets()�� ����ؾ� ��
// => scanf_s()�� ���⸦ �����ڷ� �����ϳ� gets_s()�� �Է¹��ڷ� �����ϱ� ����

// putchar = put character (���ڻ�� ��� ��ɾ�), getchar = get character (���ڻ�� �Է� ��ɾ�)
// putchar('���ڻ��'); �Ǵ� putchar(������); 
// ����) putchar()�� ���ڿ��� ������� ����
// ���������� = getchar(); 
// ����) getchar(����������);�� ���� ����ϸ� ������ ���� �߻�, �ݵ�� ���� ������ ���Ѽ� �ڵ��ؾ� ��