// 프로그램 목적: 섭씨온도를 화씨온도로 변환
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int celcius = 0;
	float ferenheit = 0.0F;

	// 자료입력 
	printf("섭씨온도를 입력해주십시오: ");
	scanf_s("%d", &celcius, sizeof(celcius));

	// 자료처리
	ferenheit = (celcius*1.8) + 32; // 1.8이므로 소수 첫째자리까지만 하면됨 => 이런 것을 아는 것이 매우 중요!

	// 결과출력 
	printf("입력한 섭씨온도 \"%d도\"는 화씨온도 \"%.1f도\"입니다.\n\n", celcius, ferenheit);

	return 0; // 실행종료
} // main함수 종료