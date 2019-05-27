// ���α׷� ����:
#include <stdio.h>
#include <stdlib.h>

struct student // ����ü ����
{
	char name[10];
	char address[10];
	int age;
};

typedef struct student student; // ����ü ������

int main(void) // main�Լ� ����
{
	FILE* fp1; // ���� ������ ����	
	student st1 = { "ȫ�浿", "����", 30 }; // ����ü ��������
	student st2 = { "�����", "��õ", 24 };
	student st3; // �Էº���

	if (fopen_s(&fp1, "basic.txt", "w") != 0)
	{
		printf("������ �� �� �����ϴ�.\n\n");
		exit(1);
	}

	fprintf(fp1, "%s %s %d\n", st1.name, st1.address, st1.age);
	fprintf(fp1, "%s %s %d\n", st3.name, st3.address, st3.age);
	fclose(fp1); 

	if (fopen_s(&fp1, "basic.txt", "r") != 0)
	{
		printf("������ �� �� �����ϴ�.\n\n");
		exit(1);
	}

	fscanf_s(fp1, "%s %s %d\n", st2.name, sizeof(st2.name), st2.address, sizeof(st2.address), &st2.age); // ���Ͽ��� �о��
	printf("�̸�: %s, ������: %s, ����: %d \n", st2.name, st2.address, st2.age); // �� �ѹ��� ��¾ȵ�?

	fscanf_s(fp1, "%s %s %d\n", st2.name, sizeof(st2.name), st2.address, sizeof(st2.address), &st2.age); // ���Ͽ��� �о��
	printf("�̸�: %s, ������: %s, ����: %d \n\n", st2.name, st2.address, st2.age);

	fclose(fp1); // ���ϴݱ�
	return 0;  // ��������
} // main�Լ� ����