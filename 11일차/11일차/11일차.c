// 프로그램 목적: 서로 다른 세 정수를 입력받아 가장 크기가 작은 수를 출력
#include <stdio.h>

int MinThree(int a, int b, int c); // 함수선언

int main(void) // main()함수의 시작
{
	// 변수선언
	int a = 0, b = 0, c = 0; // 입력변수
	
		while (1) // while의 조건식이 '1(참)'이므로 무한루프 생성
		{
			// 자료입력
			printf("임의의 서로 다른 세 정수를 입력해주십시오: ");
			scanf_s("%d %d %d", &a, &b, &c);
			
			// 입력규칙 준수여부 판단
			if ((a != b) && (b != c) && (c != a))
				break; // 입력규칙 준수 시 무한루프 탈출
			else // 입력규칙 미준수 시 아래 문장들 실행
			{
				printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n"); // 경고문구 출력
				printf("\a\a\a\a"); // 경고음 발생
			}
		}

		// 결과출력
		printf("입력하신 수 중 가장 작은 수는 %d입니다. \n\n", MinThree(a, b, c)); 
		// 함수호출: main()함수의 인수값이 MinThree()함수의 인수에 전달된 후 결과값을 반환받음
	
	return 0; // 실행종료
} // main()함수의 종료

// 함수정의: 자료처리
int MinThree(int a, int b, int c)
{
	int process = 0; // 중간결과저장
	int result = 0; // 최종결과저장

	process = (a < b) ? a : b; // 중간결과 얻기위한 처리
	result = (process < c) ? process : c; // 최종결과 얻기위한 처리

	return result; // 결과값을 함수호출 부분에 반환
}