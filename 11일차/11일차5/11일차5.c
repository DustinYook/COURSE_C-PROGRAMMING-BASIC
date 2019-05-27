// 프로그램 목적: 소수를 약수의 개수를 이용하여 판별
#include <stdio.h>

int Prime(int a); // 함수선언

int main(void) // main()함수의 시작
{
	// 변수선언
	int num = 0;

	// 자료입력
	printf("임의의 정수를 입력해주십시오: ");
	scanf_s("%d", &num);

	// 결과출력
	(Prime(num) == 1) ? printf("입력하신 수는 소수입니다.\n\n") : printf("입력하신 수는 소수가 아닙니다.\n\n");

	return 0; // 실행종료
} // main()함수의 종료

// 함수정의
int Prime(int input) 
{
	int i = 0; // 제어변수
	int divisor_num = 0; // 처리변수: 약수의 개수
	int result = 0; // 반환변수

	for (i = 1; i <= input; i++)
	{
		if (input % i == 0)
			divisor_num++; // 제수로 피제수를 나누었을 때 나누어지면 약수의 개수를 '1' 증가시킴
	}

	result = (divisor_num == 2) ? 1 : 0; // 약수의 개수가 2개이면, 즉, 소수이면 '1', 소수가 아니면 '0'의 값을 반환
	return result;
}