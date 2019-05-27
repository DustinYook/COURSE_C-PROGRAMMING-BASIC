// 프로그램 목적: 배열의 모든 원소를 차례대로 출력
#include <stdio.h>

int main(void) // main()함수의 시작
{
	// 변수선언
	int num[6] = { 1, 2, 3, 4, 5, 6 }; // 배열선언
	int i = 0; // 제어변수

	// 결과출력
	for (i = 0; i < 6; i++) // 배열의 원소를 차례대로 출력
		(i == 5) ? printf("%d\n\n", num[i]) : printf("%d, ", num[i]); // 출력제어: 마지막 배열원소(5)일 때만 다르게 출력

	return 0; // 실행종료
} // main()함수의 종료