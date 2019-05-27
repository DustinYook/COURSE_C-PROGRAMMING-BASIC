// 프로그램 목적: 임의의 정수를 입력받고 그 수가 소수인지 판별
#include <stdio.h>

int Prime(int a); // 함수선언

int main(void) // main()함수 시작
{
	// 변수선언
	int input = 0;
	int result = 0;

	// 자료입력
	printf("소수판별할 임의의 정수를 입력해주십시오: ");
	scanf_s("%d", &input);
	

	// 결과출력
	result = Prime(input); // 함수호출 및 반환값을 result 변수에 저장
	switch (result) 
	{
	case 1: 
		printf("입력하신 정수는 소수입니다.\n\n");
		break;
	case 0: 
		printf("입력하신 정수는 소수가 아닙니다.\n\n");
		break;
	}
	
	return 0; // 실행종료
} // main()함수 종료

int Prime(int input) // 값이 전달
{
	int i = 0; // 제어변수: 
	int result = 0; // 출력변수: 

	for (i = 2; i <= input; i++) // 2부터 입력받은 값까지 1씩 증가시켜가며 반복적으로 나눗셈 수행 => 목적: 약수가 있는지 판별
	{
		if (input % i == 0) // 한 번이라도 나누어 떨어지면(약수가 1개라도 있으면)반복문 즉시 탈출
			break;
	}

	result = (i == input) ? 1 : 0; // 제수가 피제수와 동일하면(소수이면) '1', 동일하지 않으면(소수가 아니면) '0'을 저장 
	return result; // 저장한 결과 값을 반환
}