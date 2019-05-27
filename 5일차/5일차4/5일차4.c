// 프로그램 목적: 양수와 음수 및 짝수와 홀수 판별
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int input; // 입력변수: 임의의 수 입력
	char pos_neg[2][10] = { "양수", "음수" }; // 배열선언1: 양수,음수 판별
	char even_odd[2][10] = { "짝수", "홀수" }; // 배열선언2: 짝수,홀수 판별

										   // 자료입력
	printf("숫자를 입력해주십시오: ");
	scanf_s("%d", &input);

	// 자료처리 및 출력
	if (input > 0) // 조건문1: 양수인 경우 => 다른 표현: input>0 && input%2==0: 양수짝수 vs input>0 && input%2==1 또는 input%2!=0: 양수홀수 
		printf("입력하신 수는 \"%s\"이며 \"%s\"입니다.\n\n", pos_neg[0], even_odd[input % 2]);
	else if (input < 0) // 조건문2: 음수인 경우
		printf("입력하신 수는 \"%s\"입니다.\n\n", pos_neg[1]);
	else // 조건문3: 0인 경우
		printf("입력하신 수는 \"0\"입니다.\n\n");

	return 0; // 실행종료
} // main함수 종료
  // 참고) if문도 함수의 일종이며 결국 제어문도 함수의 일종임