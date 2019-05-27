// 프로그램 목적: N을 입력받고 1부터 N까지 누적 덧셈연산을 수행한 결과를 출력 
#include <stdio.h>

int main(void) // main()함수 시작
{
	// 변수선언
	int input = 0; // 입력변수: 누적연산 종료값을 입력받음
	int num = 0; // 처리변수: 1씩 증가시켜가며 누적연산 수행
	int sum = 0; // 출력변수: 누적연산한 결과를 출력함

	// 자료입력
	printf("1부터 몇까지 누적된 합을 구하실지 정수형태로 입력해주십시오: ");
	scanf_s("%d", &input);

	printf("1에서 %d까지의 누적하여 합을 구합니다: ", input);
	do // do문: 조건과 관계없이 반드시 최소 1번 이상 실행
	{
		// 자료처리
		num++; // 증감연산
		sum = sum + num; // 실행문
		// 결과출력
		if (num != input) // 표시형식 제어
			printf("%d + ", num);
		else
			printf("%d = ", num);
	} while (num < input); // 후조건: 반복문 상한값 (조건 불만족시 블럭 탈출)
	printf("%d\n\n", sum);

	return 0; // 실행종료
} // main()함수 종료