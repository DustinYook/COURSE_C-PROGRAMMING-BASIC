// 프로그램 목적: 포인터변수의 의미 (i==*ptr)
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int i = 0; // 피 간접참조 변수: i의 초깃값 = 0
	int* ptr = &i; // 포인터변수: i를 간접참조

	// 자료처리 및 출력1
	*ptr = i + 1; // "*ptr"은 "i" 변수공간과 동일한 의미로 간주해도 됨 => i의 초깃값을 "i+1"로 갱신함 (0 -> 1)
	printf("i의 값: %d\n", *ptr); 

	// 자료처리 및 출력2
	*ptr = i + 1; // "*ptr"은 "i" 변수공간과 동일한 의미로 간주해도 됨 => i의 초깃값을 "i+1"로 갱신함 (1 -> 2)
	printf("i의 값: %d\n", *ptr);

	return 0; // 실행종료
} // main함수 종료