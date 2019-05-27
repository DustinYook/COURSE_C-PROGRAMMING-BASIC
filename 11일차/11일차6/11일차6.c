// 프로그램 목적: 출력할 줄 수를 입력받고 이를 기반으로 다이아몬드 형태를 출력
#include <stdio.h>

void Star_Print(int input); // 함수선언

int main(void) // main()함수의 시작
{
	// 변수선언
	int row = 0; // 입력변수: 줄 수

	// 자료입력
	printf("몇 줄 출력할지 입력해주십시오: ");
	scanf_s("%d", &row);

	// 결과출력
	Star_Print(row); // 함수호출

	return 0; // 실행종료
} // main()함수의 종료

// 함수정의
void Star_Print(int row)
{
	int i = 0; // 제어변수1: 출력줄 수 제어
	int j = 0; // 제어변수2: 공백문자 제어
	int k = 0; // 제어변수3: 출력문자 제어
	
	// 상부 삼각형
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= 2*(row-i); j++) // 다른 방법: (j=2*i-2 ; j<=2*row-2 ; j++) // for (j = 2*i; j <= 2*row; j++)
			printf(" ");
		for (k = 1; k <= 2*i-1; k++)
			printf("* ");
		printf("\n"); // 한 줄에 모두 찍는 것 방지
	}

	// 하부 삼각형
	for (i = 2; i <= row; i++) 
	{
		for (j = 1; j <= 2*i-2; j++)
			printf(" ");
		for (k = 1; k <= 2*(row-i)+1; k++) 
			printf("* ");
		printf("\n"); // 한 줄에 모두 찍는 것 방지
	}

	printf("\n"); // 도형과 종료문구 구분
}