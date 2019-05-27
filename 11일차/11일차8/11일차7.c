// 프로그램 목적: 전역변수와 지역변수의 주소와 값 출력
#include <stdio.h>

void Global_Variable(); // 함수선언
unsigned int value = 1; // 전역변수선언: main()함수 밖에 있는 변수이며 프로그램 전체에 걸쳐서 유효

int main(void) // main()함수의 시작
{
	Global_Variable(); // 함수호출

	unsigned int value = 2; // main함수 블록 안에 있는 지역변수: 전역변수와 변수명은 같지만 완전히 다름 
	printf("main함수 블록 안에 있는 지역변수의 주소값은 \"%p\"이며 값은 \"%d\"입니다.\n\n", &value, value);
	{
		unsigned int value = 3; // main함수 안에 포함된 블록 내 지역변수: 전역변수와도 다르며, main함수 블록 안에 있는 지역변수와도 다름 (블록안에서만 유효)
		printf("main함수 안에 포함된 블록 내 지역변수의 주소값은 \"%p\"이며 값은 \"%d\"입니다.\n\n", &value, value);
	}
	return 0; // 실행종료
} // main()함수의 종료

// 함수정의
void Global_Variable() 
{
	printf("전역변수의 주소값은 \"%p\"이며 그 값은 \"%d\"입니다.\n\n", &value, value); // 전역변수를 가져옴
}
// 유효범위가 좁을수록 우선순위가 높음 (전연변수 < 지역변수 < 블록 내 변수)
// 블록을 빠져나오면 메모리에서 사라짐 => C 언어의 장점: 메모리를 효율적으로 사용가능
