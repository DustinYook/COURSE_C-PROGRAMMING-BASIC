// ���α׷� ����: �ڷ��Է¹޾� ���ĺ��̸� �����ȯ, �� �� ���ڸ� �Է¹����� ���鹮�� ���
#include <stdio.h>

void Change_Case(char ch); // �Լ�����: ����� ���� �Լ�

int main(void) // main�Լ� ����
{
	// ��������
	char ch; // �Էº���: ��ȯ�Ͽ� ����� ���ĺ� �Է�

	while ((ch = getchar()) != EOF) // EOF ������ �Է¹���
		Change_Case(ch); // �Լ�ȣ��

	return 0; // ��������
} // main�Լ� ����

void Change_Case(char ch) // �Լ�����
{
	if (ch >= 'a' && ch <= 'z')
		putchar(ch - 32); // �ҹ��ڸ� �Է¹��� ��� '32'�� ���־� �빮�ڷ� ��ȯ
	else if (ch >= 'A' && ch <= 'Z')
		putchar(ch + 32); // �빮�ڸ� �Է¹��� ��� '32'�� �����־� �ҹ��ڷ� ��ȯ
	else
		putchar(' '); // ����, Ư������ �Է½� ����ó��
}
// ����) �ֿܼ��� EOF(End of File)�� <ctrl>+'z'�� �ǹ�
// �� ���� �Է� �� ���� �� ���ھ� ó���ؼ� ��� => ios stream