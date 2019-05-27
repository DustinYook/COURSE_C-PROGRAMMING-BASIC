// 프로그램 목적: 열거형 사용자정의 자료형의 활용 => enum(enumeration)
#include <stdio.h>

enum // 열거형 정의 (1번 참고)
{
	yellow = 0, // 정수형 상수 '0'의 재정의명: yellow
	red = 1,    // 정수형 상수 '1'의 재정의명: red
	blue = 2,   // 정수형 상수 '2'의 재정의명: blue
	green = 3   // 정수형 상수 '3'의 재정의명: green
}input; // 열거형 변수선언

int main(void) // main함수 시작
{
	while (1)
	{
		// 자료입력
		printf("원하는 색에 해당하는 정수코드를 입력해주십시오.\n");
		printf("(0번: 노랑, 1번: 빨강, 2번: 파랑, 3번: 초록)\n");
		scanf_s("%d", &input);

		if (input >= 0 && input <= 3)
			break;
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n");
	}

	if (input == yellow) // 정수상수 '0'대신에 "yellow"라는 별명을 사용
		printf("노랑\n\n");
	else if (input == red) // 정수상수 '1'대신에 "red"라는 별명을 사용
		printf("빨강\n\n");
	else if (input == blue) // 정수상수 '2'대신에 "blue"라는 별명을 사용
		printf("파랑\n\n");
	else
		printf("초록\n\n"); 

	return 0; // 실행종료
} // main함수 종료

// 1) 열거형은 기본적으로 0부터 시작되는 정수상수의 이름을 재정의하는 것이다
// 즉, '0'을 "zero"라고 재정의하고 '0'대신 "zero"라는 이름을 대신 사용할 수 있다
// 즉, "자료형을 재정의하는 것"이 typedef라는 개념이라면 "정수상수를 재정의하는 것"은 enum의 개념이다
// 정리하면, 열거형은 정수상수를 재정의하는 사용자정의 자료형이다.