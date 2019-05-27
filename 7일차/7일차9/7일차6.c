// 프로그램 목적: 덧셈 결과를 입력받고 이를 기반으로 1부터 몇까지 더해야 해당 결과를 얻을 수 있는지 알려주는 프로그램
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int input = 0; // 입력변수
	int num = 1; // 초기화1
	int sum = 0; // 초기화2

	// 자료입력
	printf("결과를 입력해주시면 1부터 몇까지 더해야 해당 결과를 얻을 수 있는지 알려드리겠습니다: ");
	scanf_s("%d", &input);

	// 자료처리 및 출력
	while (sum < input)
	{
		sum = sum + num;
		num++;
	}
	printf("해는 \"%d\"입니다.\n\n", num-1);

	return 0; // 실행종료
} // main함수 종료