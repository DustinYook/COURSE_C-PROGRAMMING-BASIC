#include <stdio.h>

int main(void)
{
	char input[5];
	char pw[5] = { 'c','o','d','e' };
	char i = 0; // �����
	char match_count = 0; // �� ���� ���� Ƚ�� ī��Ʈ

	while (1) // while�� ���ǽ��� '1(��)'�̹Ƿ� ���ѷ����� ����
	{
		IN:
		// �ڷ��Է�
		printf("4�ڸ� ��й�ȣ�� �Է����ֽʽÿ�: ");
		scanf_s("%s", &input, sizeof(input));

		// �Է±�Ģ �ؼ����� �Ǵ�
		if (sizeof(input) / sizeof(char) == 5)
		{
			for (i = 0; i < 5; i++)
			{
				if (input[i] == pw[i])
					match_count++;
			}
			break;
		}
		else
			printf("�Է��Ͻ� ��й�ȣ�� �߸��Ǿ����ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n");
	}
	
	if (match_count == 5)
		printf("�α��� �Ǿ����ϴ�.\n\n");
	else
	{
		printf("�Է��Ͻ� ��й�ȣ�� �߸��Ǿ����ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n");
		goto IN;
	}
		
	return 0;
}