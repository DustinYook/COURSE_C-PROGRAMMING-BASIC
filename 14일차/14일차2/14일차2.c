// ���α׷� ����: ���̺귯�� �Լ� strcpy(), strcmp(), strcat()�� ���
#include <stdio.h>
#include <string.h> // ���̺귯�� �Լ� strcpy_s(), strcmp(), strcat_s()�� ����ϱ� ���� ��ó����

int main(void) // main�Լ� ����
{
	// ��������
	char string1[40] = "C language"; // (1�� ����) 
	char string2[] = "B language";
	char string3[] = "C language";
	char string4[] = " is easy";
	int i = 0; // �����: for�� ����
	int length = strlen(string1); // ���ڿ��� ���� ����

	// �� ���� ���
	printf("1) �Ʒ��� string1, string2, string3�� �����ּҺ��� ����� ���ڿ��� ���Դϴ�.\n");
	printf("string1�� ����� ���ڿ��� ������ �����ϴ�: ");
	for (i = 0; i < length; i++) // �Ǵ� for(i=0; *(string1+i); i++) => ����) string1�� �����ͻ���̹Ƿ� ���尪�� �����ϴ� "*string1++"�� ���Ұ�
		printf("%c", string1[i]);
	printf("\n");

	printf("string2�� ����� ���ڿ��� ������ �����ϴ�: ");
	for (i = 0; *(string2+i); i++)
		printf("%c", *(string2+i)); // ����) string2�� �����ͻ���̹Ƿ� ���尪�� �����ϴ� "*string2++"�� ���Ұ�
	printf("\n");

	printf("string3�� ����� ���ڿ��� ������ �����ϴ�: ");
	printf("%s\n\n", string3);

	// �ڷ�ó�� �� ��� 1: ���̺귯�� �Լ� strcmp()�� �̿��� ���ڿ��� �񱳿��� (2�� ����)
	printf("2) �Ʒ��� ������ string1�� string2, string3�� �񱳰���Դϴ�\n");
	printf("string1�� string2�� ���� %s\n", strcmp(string1, string2) ? "�ٸ��ϴ�." : "�����ϴ�.");
	printf("string1�� string3�� ���� %s\n\n", strcmp(string1, string3) ? "�ٸ��ϴ�." : "�����ϴ�.");

	// �ڷ�ó�� �� ��� 2: ���̺귯�� �Լ� strcpy()�� �̿��� ���ڿ��� ���Կ��� (3�� ����)
	printf("3) �Ʒ��� ������ string1�� string2�� ���� ���Կ����� ����Դϴ�.\n");
	strcpy_s(string1, sizeof(string1), string2); // string1�� �����ּҸ� ���� ���ڿ��� string2�� �����ּҸ� ���� ���ڿ��� ���� ����
	printf("string1�� string2�� ���Կ����ϸ� \"%s\"�� ��µ˴ϴ�.\n\n", string1);
	
	// �ڷ�ó�� �� ��� 3: ���̺귯�� �Լ� strcat()�� �̿��� ���ڿ��� ���Կ��� (4�� ����) 
	printf("4) �Ʒ��� ������ string1�� string4�� ���Ῥ���� ����Դϴ�.\n");
	strcat_s(string1, sizeof(string1), string4); // string1�� �����ּҸ� ���� ���ڿ��� string2�� �����ּҸ� ���� ���ڿ��� ���� ����(concatenate)
	printf("string1�� string4�� ���Ῥ���ϸ� \"%s\"�� ��µ˴ϴ�.\n\n", string1);

	return 0; // ��������
} // main�Լ� ����

// ����) ���� ����: strcmp = string compare / strcpy = string copy / strcat = string concatenate <����) concatenate: ��罽 ������� �����ϴ�>
//
// 1) strcpy, strcmp, strcat�Լ��� �̿��ϱ� ���ؼ��� �ݵ�� �񱳱����� �Ǵ� ���ڿ��� ũ�⸦ ǥ���ؾ� �Ѵ�.
// ���� ��� char cmp1[] = "C programming";�̳� char* cmp1 = "C programming";�� ���ڿ��� ũ�⸦ ��Ÿ���� �����Ƿ� ������ ���� �߻�
// 
// 2) ���̺귯�� �Լ� strcmp()�� ����: strcmp(operand1, operand2) => operand1�� operand2���� "���ڿ�" �Ǵ� �迭���� ���� �� ���� (4���� ���� ����)
// operand1�� "�񱳱���"�̰� operand2�� "�񱳴��"�̴�. (����: operand1�� �ݵ�� ���ڿ��� ũ�Ⱑ ��õǾ� �־�� ��)
// strcmp() �Լ��� ����: operand1�� ������ ASCII �ڵ尪���� operand2�� ������ ASCII �ڵ尪�� ���� ������ ����
// Case#1: operand1�� operand2�� ������ "0(����)"�� ���� ��ȯ
// Case#2: operand1�� ������ operand2�� ���� ũ�� "���� ������(��)"�� ��ȯ 
// Case#3: operand1�� ������ operand2�� ���� ������ "���� ������(��)"�� ��ȯ
// strcmp() �Լ��� �Ϲݺ����� �񱳿�����('==')�� ������ ������ �����Ѵ�.
// 
// 3) ���̺귯�� �Լ� strcpy_s()�� ����: strcpy_s(operand1, sizeof(operand1), operand2)
// => operand1�� �ݵ�� ������ �迭���� �;��ϰ� operand2���� "���ڿ�" �Ǵ� �迭���� ���� �� ���� (2���� ���� ����)
// ����) operand1�� �����ؾ��ϹǷ� �ݵ�� ����� �ƴ� ������ �;��ϸ�, �Է��� ������ �����ϹǷ� "_s"�� ���� ���¸� ����ϴ� ���� �ٶ����ϴ�.
// operand1�� "�񱳱���"�̰� operand2�� "�񱳴��"�̴�. (����: operand1�� �ݵ�� ���ڿ��� ũ�Ⱑ ��õǾ� �־�� ��)
// strcpy() �Լ��� �Ϲݺ����� ���Կ�����('=')�� ������ ������ �����Ѵ�.
// 
// 4) ���̺귯�� �Լ� strcat_s()�� ����: strcat_s(operand1, operand2) 
// => operand1�� �ݵ�� ������ �迭���� �;��ϰ� operand2���� "���ڿ�" �Ǵ� �迭���� ���� �� ���� (2���� ���� ����) 
// ����) operand1�� �����ؾ��ϹǷ� �ݵ�� ����� �ƴ� ������ �;��ϸ�, �Է��� ������ �����ϹǷ� "_s"�� ���� ���¸� ����ϴ� ���� �ٶ����ϴ�.
// operand1���� operand1�� operand2�� ����� ����� ����ȴ� 
// => ���� ������ operand1���� ���� operand1�� ����� "B language"��� ���ڿ��� operand2�� ����� " is easy"��� ���ڿ��� �����
// "B language is easy"��� ���ڿ��� ����ʿ� �����ؾ� �Ѵ�.
//
// 5) �����ͺ����� ���ڿ� �����ּҸ� ����ǰ� ���ڿ� ũ�Ⱑ �������� ���� 
// ���� ���ڿ��� ũ�����ڰ� �ʿ��� <string.h>�� <ctype.h>�� ���ǵ� ���̺귯�� �Լ��� ���Ұ�
//
// (+) ���� ��������� strcmp()������ string_compare()�� ����� �Լ��� ��Ÿ������!