// ���α׷� ����: �Է������� ���� �������
#include <stdio.h>

int main(void)
{
	// ��������
	int score; // �Է��ڷ�: ����
	char grade[] = { 'A','B','C','D','F' }; // ó���ڷ�: ����
	char result = 'a'; // ����ڷ�: ������ �ش��ϴ� ����

					   // �ڷ��Է� �� �Է±�Ģ �ؼ����� �Ǻ�
	while (1)
	{
		// �ڷ��Է¹�
		printf("����� ������ 0���� 100������ �������·� �Է����ֽʽÿ�: ");
		scanf_s("%d", &score);

		// �Է±�Ģ �ؼ����� �Ǵ�
		if (score >= 0 && score <= 100)
			break;
		printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n\a\a\a\a");
	}

	// �ڷ�ó�� �� ���
	switch (score / 10)
	{
	case 10: // 100�����̰�
	case 9: // 90������ ���
		result = grade[0]; // A���� ���
		break; // switch�� Ż��
	case 8: // 80������ ���
		result = grade[1]; // B���� ���
		break; // switch�� Ż��
	case 7: // 70������ ���
		result = grade[2]; // C���� ���
		break; // switch�� Ż��
	case 6: // 60������ ���
		result = grade[3]; // D���� ���
		break; // switch�� Ż��
	default: // 60�� �̸��� ���
		result = grade[4]; // F���� ���
		break; // switch�� Ż��
	}
	printf("����� ������ \"%d��\"�̰� ������ \"%c\"�Դϴ�\n\n", score, result);

	return 0; // ��������
}

// char grade;
// if(score>=90)
// grade ='A';
// else if(score>=80)
// grade = 'B';
// else 
// printf("����� ������ %c�Դϴ�.",grade);

// char grade[3] = {'a','b','c'};
// ���ڴ� assign�����ڷ� ���԰����ϳ� ���ڿ��� strcpy(������, "���ڿ�")�Լ��� �̿��ؾ� ��
// 1) char name[10]; (X)
//    name = "������"; 
// 2) char name[10] = "������"; (O)

// switch(������)
// {
//    case 11:
//    case '=':
//    case 'a':
//    default: ������ ó��
// }  => �ϴ� "case:" ���� ���ְ� ���๮�� "break;"�� �� ��  