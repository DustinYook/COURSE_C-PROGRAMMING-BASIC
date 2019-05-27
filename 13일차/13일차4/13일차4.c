// 프로그램 목적: *ptr++을 이용한 누적연산 (13-1과 비교!)
#include <stdio.h>

int Sum2(int* ptr, int size); // 함수선언2

int main(void) // main함수 시작
{
	// 변수선언
	int a[] = { 1, 2, 3, 4, 5 }; // 배열명 'a'는 배열의 시작주소를 의미 ('값'이 아니라 '주소')
	// 결과출력
	printf("2) *ptr++을 이용한 배열의 누적합: %d\n\n", Sum2(a, 5)); // 함수호출1
	return 0; // 실행종료
} // main함수 종료

int Sum2(int* ptr, int size) // 함수정의2: 자료처리
{ // main함수의 배열 a의 시작주소를 사용자정의함수의 포인터변수 ptr에 전달하고, 배열크기의 값을 size에 전달
	int result = 0; // 출력변수
	int i = 0; // 제어변수
	for (i = 0; i < size; i++) // 연산을 "size번"만큼 반복
		result = result + *ptr++; // result 저장값 변화: 0+1->1+2->3+3->6+4->10+5 (결과: 15)
		// 중요) "*ptr++"의 의미: "포인터변수에 저장된 주소값"을 "간접참조배열 자료형단위만큼 증가시켜 얻은 주소에 저장된 값"을 (*ptr)에 저장
	return result; // 결과값 반환
}