/*===================================================================================================
* File Name: 7����3.c
* Description: This program code is designed to return the value of the input month's last date (P.170-5)
* Programmed by Dustin Yook (January 19, 2017)
* Last updated: Version 1.0, January 19, 2017 (By Dustin Yook)
*=====================================================================================================
* Version Control (Explain updates in detail)
*=====================================================================================================
*   Name      |  YYYY/MM/DD  |  Version Remarks
* Dustin Yook |  2017/01/19  |  Program built
*===================================================================================================*/

#include <stdio.h>

int main(void)
{
	// ��������
	int month = 0; // �Էº���
	int last_day = 0; // ��º���
	int IN = 0; // �����

IN:
	// �ڷ��Է�
	printf("������ ��¥�� �˰� ���� ���� 1���� 12������ \"����\"�� �Է��Ͻÿ�: ");
	scanf_s("%d", &month);

	// �ڷ�ó�� �� ���: �Է� ��Ģ ���ؼ���
	if (month >= 1 && month <= 12) // �Է� ��Ģ�� �ؼ��� ��� �ٷ� �Ʒ� ��ɹ� ����
		printf("�Է��� ���� \"%d��\"�Դϴ�.\n", month);
	else // �Է� ��Ģ�� ���ؼ��� ��� ��� ���� ��ɹ� ����
	{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n");
		printf("\a\a\a\a\a\a\a\a\a\a\a\a\a");
		goto IN; // �ڷ��Է� �κ����� �ǵ���
	}

	// �ڷ�ó�� �� �ڷ����: �Է� ��Ģ �ؼ���
	switch (month)
	{
	case 2: // 29���� ��
		last_day = 29;
		break; // ��Ͽ��� ���������� ��
	case 4: // 30���� ��
	case 6: 
	case 9: 
	case 11:
		last_day = 30;
		break;
	default: // ���� ���� �޵��� �ش�Ǵ� 31���� default�� �����صξ�� �ڵ������� ���� �� ����
		last_day = 31;
	}
	printf("�ش� ���� ������ ���� \"%d��\"�Դϴ�.\n\n", last_day);

	return 0; // ���� ����
}
