#include <stdio.h>
#include <stdlib.h> 
#define LINE 50 // ��������� �Լ� ó��

int main(void) // main�Լ� ����
{
	FILE* fp1; // 2) ����������: ����� ���� ������ŭ ����
	FILE* fp2; 
	char line[LINE];
	
	if(fopen_s(&fp1, "lineinput.txt", "r") != 0) // �б�뵵�� ������ ���� ���������� ������ '0'��, ������ ���ų� �뷮�ʰ��̸� '0�̿��� ��'�� ��ȯ
	{
		printf("������ �� �� �����ϴ�.\n\n");
		exit(1); // ��������
	}

	fopen_s(&fp2, "linetarget.txt", "w"); // ����뵵�� ������ ���� ���� ���� �� ����ȭ �� ���Ӱ� ���, ���� ������ �� �� ���� ����   

	while (fgets(line, LINE, fp1) != NULL) 
		fputs(line, fp2);

	fclose(fp1); // ���ϴݱ�1
	fclose(fp2); // ���ϴݱ�2

	return 0; // ��������
} // main�Լ� ����


// �����̷� ���� �� ������ ���� �Ǵ��� NULL�� �ϰ� �ѹ��ڷ� ���� �� ������ �� �Ǵ��� EOF(End of File)�� ��
// ������ ���̰ų�  // 30���ھ� �о���� <-> (ch=fgetc(fp1) != EOF) // fp1���� 1���ھ� �о����
// 1) ����ó���Լ� ����: f�� ���� ó���Լ�