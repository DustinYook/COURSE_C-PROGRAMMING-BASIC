// ���α׷� ����: ������ �Է¹ް� �����뿡 ���� ���� �ο� (switch~case�� �̿�)
#include <stdio.h>

int main(void) // main�Լ� ����
{
	// ��������
	int score = 0; // �Էº���: �����Է�
	char grade[5] = { 'A', 'B', 'C', 'D', 'F' }; // ��º���: �������
	char result = 'a';

	while (1) // ���ǹ��� '1(��)'�̹Ƿ� ���ѷ��� ����
	{
		// �ڷ��Է�
		printf("0���� 100������ ������ �Է����ֽʽÿ�: ");
		scanf_s("%d", &score);

		// �Է±�Ģ �ؼ����� �Ǵ�
		if (score>=0 && score<=100)
			break; // �Է±�Ģ �ؼ� �� ���ѷ��� Ż��
		printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n\a\a\a\a");
	}
	// �ڷ�ó�� �� ���
	switch (score / 10)
	{
	case 10:
	case 9: result = grade[0];
		break;
	case 8: result = grade[1];
		break;
	case 7: result = grade[2];
		break;
	case 6: result = grade[3];
		break;
	default: result = grade[4];
	}
	printf("�Է��Ͻ� ������ �ش��ϴ� ������ \"%c\"�Դϴ�.\n\n", result);

	return 0; // ��������
} // main�Լ� ����