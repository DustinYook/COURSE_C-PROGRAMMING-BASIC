// 프로그램 목적: 자료형의 표현범위
#include <stdio.h>
#include <math.h>

int main(void)
{
	// 변수선언
	signed short a, b; // signed: 보통 signed는 생략
	unsigned short c;
    
	// 자료처리
	a = pow(2, 15) - 1; 
	b = pow(2, 15); // 표현 범위를 초과하여 overflow 발생
	c = pow(2, 15);

	// 결과출력
	printf("a의 값은 %d이다.\n", a);
	printf("b의 값은 %d이다.\n", b);
	printf("c의 값은 %d이다.\n\n", c);

	return 0; // 실행종료
}

// short는 2바이트이므로 16비트 => 표현범위: signed(-2^15~2^15-1) vs unsigned(0~2^16-1)