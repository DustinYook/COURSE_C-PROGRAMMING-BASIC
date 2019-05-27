// 프로그램 목적: Call by Value와 Call by Reference의 차이점
#include <stdio.h>

void Increment1(int n); // 함수선언1
void Increment2(int *n); // 함수선언2

int main(void) // main함수 시작
{
	// 변수선언
	int a = 0;

	// 자료처리 및 출력1
	printf("a의 초깃값: %d\n\n", a);
	// 자료처리 및 출력2
	Increment1(a);
	printf("Increment1 실행 후 a의 값: %d\n\n", a); // a는 '1'이 아닌 '0'
	// 자료처리 및 출력3
	Increment2(&a);
	printf("Increment2 실행 후 a의 값: %d\n\n", a); // a는 '0'에서 '1'로 증가

	return 0; // 실행종료
} // main함수 종료

void Increment1(int n) // a의 값이 n에 전달 (값만 전달)
{
	n++; // 저장값 변화: 0 -> 1 => 주의) 블록 나가면서 무효화
	printf("Increment1 내부의 a값: %d\n", n); 
}

void Increment2(int* n) // a의 주소값이 포인터변수 n에 전달 (주소값이 전달)
{
	(*n)++; // n에 저장된 주소값에 저장된 값을 1 증가 => 저장값 변화: 0 -> 1
	printf("Increment2 내부의 a값: %d\n", *n);
}
// return: 직접참조
// 포인터변수: 간접참조 
// 지역변수, 전역변수의 개념 => Call by Value와 Call by Reference의 차이를 만들어 내는 원인