// 프로그램 목적: 1부터 20사이의 정수 중에서 3의 배수이면서 4의 배수가 아닌 수를 출력
#include <stdio.h>

int main(void) // main()함수의 시작
{
	int num = 0;

	for (num = 1; num <= 20; num++) 
	{
		if ((num % 3 != 0) || (num % 4 == 0)) // if(!(i%3==0) && (i%4!=0))
			continue; // continue문의 의미: 조건을 만족시키면 아래 printf()문을 실행하지 않고 증감연산을 시행 (skip과 같은 의미)
		printf("%d ", num);
	}

	return 0;  // 실행종료
} // main()함수의 종료