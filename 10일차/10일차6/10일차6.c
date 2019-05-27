// 프로그램 목적: 시작값과 종료값을 입력받고 연속된 합을 구함
#include <stdio.h>

int Integral(int start, int end); // 함수선언

int main(void)
{
	// 변수선언
	int start = 0, end = 0; // 입력변수
	int result = 0; // 출력변수
	int i = 0; // 제어변수

			   // 자료입력
	printf("연속적인 덧셈을 수행할 시작값과 종료값을 정수의 형태로 입력해주십시오: ");
	scanf_s("%d %d", &start, &end);

	// 자료처리 및 출력
	printf("\n함수를 호출하지 않고 시작값에서 종료값까지의 합을 구함\n");
	for (i = start; i <= end; i++)
		result += i;
	printf("%d에서 %d까지 더한 결과값은 %d입니다.\n\n", start, end, result);

	// 방법1: 함수를 호출하여 변수를 대입하고 결과값을 반환받음
	printf("방법1: 함수를 호출해서 시작값에서 종료값까지의 합을 구함\n");
	printf("%d에서 %d까지 더한 결과값은 %d입니다.\n\n", start, end, Integral(start, end));

	// 방법2: 함수를 호출하여 상수를 대입하고 결과값을 반환받음
	printf("방식1: 함수를 호출해서 1부터 10까지 합을 구함\n");
	printf("1부터 10까지 더한 결과값은 %d입니다.\n\n", Integral(1, 10)); // 1과 10을 하단부 함수정의식의 start, end에 전 및 처리 후 값을 반환 받은 결과를 저장

	return 0; // 실행종료
}

int Integral(int a, int b) // 함수정의 
{
	int sum = 0;
	int i = 0; // 제어변수

	for (i = a; i <= b; i++)
		sum = sum + i;

	return sum; // 반환값
}
// 일반적으로 사용자 정의함수는 void 함수명();의 형태로 많이 선언됨: void는 return값이 없다는 것을 의미
// 사용자 정의함수는 반복처리할 때 많이 사용함
// 부분부분을 모듈화 시켜서 main()함수에서 불러내는 것으로 자주 사용 (객체지향에서 매우 중요)