#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;

	printf("소수 판별할 숫자를 입력하십시오: ");
	scanf_s("%d", &num);

	for (i = 2; i <= num; i++) // 조건식에서 i==num일 때까지 반복문 실행
		if (num % i == 0)
			break;
	if (num == i)
		printf("소수\n");
	else
		printf("소수 아님\n");

	return 0;
}
// 로직 풀어서 이해해보기
// 1은 소수아님

// do while문에서 do는 1번은 실행