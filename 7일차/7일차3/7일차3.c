/*===================================================================================================
* File Name: 7일차3.c
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
	// 변수선언
	int month = 0; // 입력변수
	int last_day = 0; // 출력변수
	int IN = 0; // 제어변수

IN:
	// 자료입력
	printf("마지막 날짜을 알고 싶은 달을 1에서 12사이의 \"정수\"로 입력하시오: ");
	scanf_s("%d", &month);

	// 자료처리 및 출력: 입력 규칙 미준수시
	if (month >= 1 && month <= 12) // 입력 규칙을 준수한 경우 바로 아래 명령문 실행
		printf("입력한 달은 \"%d월\"입니다.\n", month);
	else // 입력 규칙을 미준수한 경우 블록 안의 명령문 실행
	{
		printf("잘못 입력하셨습니다. 다시 한 번 입력해주십시오.\n\n");
		printf("\a\a\a\a\a\a\a\a\a\a\a\a\a");
		goto IN; // 자료입력 부분으로 되돌림
	}

	// 자료처리 및 자료출력: 입력 규칙 준수시
	switch (month)
	{
	case 2: // 29일인 달
		last_day = 29;
		break; // 블록에서 빠져나오게 함
	case 4: // 30일인 달
	case 6: 
	case 9: 
	case 11:
		last_day = 30;
		break;
	default: // 가장 많은 달들이 해당되는 31일을 default로 설정해두어야 코딩라인을 줄일 수 있음
		last_day = 31;
	}
	printf("해당 달의 마지막 날은 \"%d일\"입니다.\n\n", last_day);

	return 0; // 실행 종료
}
