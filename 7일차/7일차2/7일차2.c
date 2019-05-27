// 프로그램 목적: 도형종류코드와 변의 길이(또는 반지름의 길이)를 입력받고 도형의 종류와 면적을 출력
#include <stdio.h> 
#include <math.h> // pow()와 sqrt()를 사용하기 위한 전처리기
#define PIE 3.14 // 사용자 정의 상수

int main(void) // main함수 시작
{
	// 변수선언
	short input = 0; // 입력변수1: 도형종류 구분
	int length = 0; // 입력변수2: 변 또는 반지름의 길이
	double area = 0.0; // 출력변수: 도형의 넓이
	char figure[3][15] = { "정삼각형", "정사각형", "원" }; // 배열선언: 도형의 종류 출력

	while (1) // 조건문이 '1(참)'이므로 무한루프 생성
	{
		// 자료입력
		printf("넓이를 구하고자 하는 도형 종류의 \"기호\"와 \"변의 길이\" 또는 \"반지름의 길이\"를 정수로 입력해주십시오.\n");
		printf("(정삼각형:1, 정사각형:2, 원:3)\n");
		scanf_s("%hd %d", &input, &length);
		
		// 입력규칙 준수여부 판단
		if ((input >= 1) && (input <= 3) && (length >= 0)) // 입력기호는 1과 3사이의 정수이고, 반지름의 길이는 0보다 커야 함 
			break;
	    printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\n\a\a\a\a");
	}

	// 자료처리 및 출력: 입력 규칙 준수시
	switch (input)
	{
	case 1: area = (sqrt(3) / 4)*pow(length, 2); // sqrt(a) == a^(1/2)
		break;
	case 2: area = pow(length, 2); // pow(a,b) == a^b
		break;
	case 3: area = PIE*pow(length, 2); // 참고) <math.h>를 전처리기로 하였으므로 "M_PI"라는 변수상수를 사용해도 됨
		break;
	}
	printf("입력하신 기호에 해당하는 도형은 \"%s\"이고 면적은 \"%+.2lf\"입니다.\n\n", figure[input - 1], area);  // figure은 도형 종류 출력, area는 면적 출력

	return 0; // 실행종료
} // main함수 종료