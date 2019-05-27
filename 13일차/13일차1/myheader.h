#include <stdio.h>

int Sum2(int* ptr, int size); // 함수선언2

int Sum2(int* ptr, int size) // 함수정의2: 자료처리
{ // main함수의 배열 a의 시작주소를 사용자정의함수의 포인터변수 ptr에 전달하고, 배열크기의 값을 size에 전달
	int result = 0; // 출력변수
	int i = 0; // 제어변수
	for (i = 0; i < size; i++) // 연산을 "size번"만큼 반복
	{
		printf("result의 값 = %d vs (*ptr)++의 값 = %d\n", result, (*ptr)++);
		result = result + *ptr++; // result 저장값 변화: 0+
	}

	return result; // 결과값 반환
}

