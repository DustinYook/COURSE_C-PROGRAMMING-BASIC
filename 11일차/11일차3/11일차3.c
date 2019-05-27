// 프로그램 목적: 10개의 정수를 입력받아 가장 작은 수를 출력
#include <stdio.h>

int Min(int num[10]); // 함수선언

int main(void) // main()함수 시작
{
	// 변수선언
	int i = 0; // 제어변수
	int num[10]; // 입력변수

	// 자료입력
    printf("10개의 정수를 입력해주십시오.\n\n");
	for (i = 0; i < 10; i++) // 반복해서 입력받음
	{
		printf("%d번째 수를 입력해주십시오: ", i+1);
		scanf_s("%d", &num[i]);
	}
		
	printf("입력하신 10개의 수 중 가장 작은 수는 \"%d\"입니다. \n\n", Min(num)); 

	return 0; // 실행종료
} // main()함수 종료

int Min(int input[10]) // 함수정의
{
	int min = input[0]; // 배열의 첫번째 원소를 비교기준으로 설정
	int i; // 제어변수

	for (i = 1; i < 10; i++)
	{
		if (min > input[i]) // min이 다른 수 보다 크면 min의 값을 더 작은 값으로 갱신
			min = input[i];
	}
		
	return min; // 가장 작은 min의 값을 반환
}