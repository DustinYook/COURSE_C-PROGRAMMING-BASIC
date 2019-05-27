// 프로그램 목적: 달을 입력받아 해당 달의 마지막 날을 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int month = 0;

	while (1)
	{
		// 자료입력
		printf("마지막 날짜를 알고 싶은 달을 1에서 12사이의 정수로 입력해주십시오: ");
		scanf_s("%d", &month);
		
		// 입력규칙 준수여부 판단
		if (month >= 1 && month <= 12)
			break; // 입력규칙 준수 시 무한루프 탈출
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\a\a\a\a");
	}
	
	switch (month/7) // 7을 기준으로 양분
	{
	case 0: // 입력받은 달이 7보다 작은 경우 (case는 "=="과 같음)
		month = (month % 2 == 0) ? month : 31; // 짝수이면 입력 값 저장, 아니면 31 저장: 2, 4, 6, 31
		month = (month == 2) ? 29 : month; // 2이면 29 저장, 아니면 입력 값 또는 31 저장: 4, 6, 29, 31
		month = ((month == 4) || (month == 6)) ? 30 : month;
		break;
	
	case 1: // 입력받은 달이 7보다 큰 경우: 7, 8, 9, 10, 11, 12
		month = ((month % 2 == 0)||(month==7)) ? 31 : 30; // 7,8,10,12:31 vs 9,11:30
		break;
	} 
	printf("입력한 달의 마지막 날은 \"%d일\"입니다.\n\n", month);

	return 0; // 실행종료
} // main함수 종료