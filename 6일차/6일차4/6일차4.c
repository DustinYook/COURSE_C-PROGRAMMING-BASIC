// 프로그램 목적: 입력 코드에 따라 영어인사 출력
#include <stdio.h>

void Greeting(int input); // 함수선언

int main(void) // main함수 시작
{
	// 변수선언
	int input = 0; // 입력변수: 어떤 인사를 출력할 지 코드입력
	char time[3][10] = { "아침", "점심", "저녁" }; // 문자열 배열: char 배열명[원소개수][배열크기] = {"문자열1", ... , "문자열N"};
	int num[3] = { 1, 2, 3 }; // 배열선언
	int i = 0; // 제어변수: for문 제어

			   // 자료입력
	printf("영어로 인사하는 법을 배우겠습니다.\n");
	for (i = 0; i<3; i++)
		printf("%s 인사는 %d번을 누르세요.\n", time[i], num[i]);

	while (1)
	{
		// 자료입력
		printf("어느 인사를 출력하실지 정수코드를 입력해주십시오: ");
		scanf_s("%d", &input);
		// 입력규칙 준수여부 판단
		if (input >= 1 && input <= 3)
			break;
		printf("잘못입력하셨습니다. 다시 한 번 정확히 입력해주십시오.\n\n\a\a\a\a");
	}

	Greeting(input);

	return 0; // 실행종료
}

void Greeting(int input) // 함수정의
{
	// 변수선언
	int result = 0;
	char greeting[3][25] = { "Morning", "Afternoon", "Night" };

	// 자료처리 및 출력
	switch (input) // switch에는 반드시 정수값(변수, 연산식, 문자상수 등)이 들어가야 함 => 이외의 값은 에러발생
	{
	case 1: result = 0; // 1을 입력시 다음 실행문이 실행
		break;
	case 2: result = 1; // 2를 입력시 다음 실행문이 실행
		break;
	case 3: result = 2; // 3을 입력시 다음 실행문이 실행
		break; // break를 만날때까지 실행문을 모두 수행 => 블럭을 잡을 필요 없음
	default: result = '\0'; // 나머지 처리는 default를 이용 => default가 switch의 마지막 문장이므로 break문을 굳이 쓰지 않아도 됨
	}
	printf("\"Good %s!\"\n\n", greeting[result]);
}

// break의 역할을 정확히 이해
// 1등 a,b,c, 2등 b,c, 3등 c
// 계층적으로 자료가 있을 때 사용 
// 더하기, 빼기, 곱하기, 나누기일때 사용가능 => 계산기 직접 만들어보기

// 가장 많은 것을 default 처리하면 코딩라인을 줄일 수 있음
// if => 경우마다 처리가 완전히 다를 때
// switch case => 경우마다 처리가 중첩되는 경우