// 프로그램 목적: *를 삼각형 형태로 출력하게 함
#include <stdio.h>

int main(void)
{
	// 변수선언
	int input = 0; // 입력변수: 출력할 행의 수를 결정
	int row = 0; // 제어변수1: 출력할 행의 수를 제어
	int print1 = 0; // 제어변수2: 출력할 ' ' 문자의 수를 제어
	int print2 = 0; // 제어변수3: 출력할 '* ' 문자의 수를 제어
	
	// 자료입력
	printf("출력하고 싶은 삼각형의 크기를 정수형태로 입력해주십시오: "); // 질문: 정수랑 실수형태 입력조건 판별법
	scanf_s("%d", &input);

	// 삼각형 출력
	for (row=1; row<=input; row++)
	{	
		for(print1=row; printf1<=)
	}

	return 0;
}

// 로직: 1찍 증가/감소하면서 반복하는 규칙성 존재 -> 반복문 사