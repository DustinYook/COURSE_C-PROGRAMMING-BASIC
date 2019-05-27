// 프로그램 목적: 정육면체 한 변의 길이를 입력받고 표면적과 부피를 출력
#include <stdio.h>
#include <math.h> // pow()함수를 사용하기 위한 전처리기

int Cube_Area(int a); // 함수선언1
int Cube_Volume(int a); // 함수선언2

int main(void) // main()함수 시작
{
	// 변수선언
	int length = 0; // 입력변수: 정육면체 한 변의 길이

	// 자료입력
	printf("정육면체의 한변의 길이를 입력해주십시오: ");
	scanf_s("%d", &length);

	// 결과출력
	printf("정육면체의 표면적은 \"%d\"이고 부피는 \"%d\"입니다.\n\n", Cube_Area(length), Cube_Volume(length)); // 함수호출

	return 0; // 실행종료
} // main()함수 종료

int Cube_Area(int length) // 함수정의1
{
	int result = 6 * pow(length, 2); // 표면적을 구하기 위한 처리과정 
	return result; // 결과값 반환
}

int Cube_Volume(int length) // 함수정의2
{
	int result = pow(length, 3); // 부피를 구하기 위한 처리과정
	return result; // 결과값 반환
}