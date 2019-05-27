// 프로그램 목적: 배열 원소의 개수와 모든 배열원소의 곱을 구하여 출력
#include <stdio.h>

int main(void) // main()함수의 시작
{
	// 변수선언
	int num[] = { 1,2,3,4,5 }; // 배열선언
	int i = 0; // 제어변수
    int result = 1; // 출력변수
	
	for (i = 0; i < (sizeof(num) / sizeof(int)); i++) // sizeof(변수명)/sizeof(자료형)의 의미: 배열의 원소 개수
		result = result * num[i];
	printf("배열의 원소개수는 \"%d\"개이고 \"%d\"에서 \"%d\"까지 곱한 결과는 \"%d\"입니다.\n\n", sizeof(num)/sizeof(int), num[0], num[4], result);

	return 0; // 실행종료
} // main()함수의 종료

// 핵심) 배열크기가 유동적인 경우 sizeof()를 이용해서 원소개수를 파악
// 참고) 배열의 차원에 따라서 for문의 필요개수가 달라짐 (1차원은 1번, 2차원은 2번)
// 참고) sizeof(num) == 4바이트(int) * 5개의 원소 == 20바이트