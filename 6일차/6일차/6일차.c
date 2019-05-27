// 프로그램 목적: 세 정수 중 가장 큰 수 출력 (if~else if문 응용)
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int num1, num2, num3; // 입력자료: 세 정수 입력
	int max = 0;

	while (1) // 조건문이 '1(참)'이므로 무한루프 생성
	{
		// 자료입력
		printf("서로 다른 세 정수를 입력해주십시오: ");
		scanf_s("%d %d %d", &num1, &num2, &num3);
		
		// 입력규칙 준수여부 판단
		if (!(num1==num2) && !(num1 == num3) && !(num2==num3))
			break; // 입력규칙 준수 시 무한루프 탈출
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\a\a\a\a");
	}

	// 자료처리 및 출력
	if (num1 > num2 && num1 > num3)
		max = num1;
	else if (num2 > num3) // 부정: num2보다 num3이 크거나, num2보다 num1이 큼
		max = num2;
	else // 부정: num1보다 num2가 크거나, num1보다 num3이 큼
		max = num3;
	printf("입력하신 세 정수 중 가장 큰 수는 \"%d\"입니다.\n\n", max);	

	return 0; // 실행종료
} // main함수 종료