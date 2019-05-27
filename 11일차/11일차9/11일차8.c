// 프로그램 목적: 정적변수와 자동변수의 차이점 관찰
#include <stdio.h>

void Call_Static(); // 함수선언1
void Call_Auto(); // 함수선언2

int main(void)
{
	// 변수선언
	int i; // 제어변수

	for (i = 1; i <= 5; i++) 
	{
		Call_Static(); // 함수호출1
		Call_Auto(); // 함수호출2
	}

	return 0; // 실행종료
}

void Call_Static() // 함수정의1
{
	static int count = 0; // 정적변수: 메모리에 한 번 초기치를 할당하면 프로그램이 종료될 때까지 저장된 값이 유지됨 (자동변수와 대비되는 개념)
	printf("\"%d\"번째 호출된 ", count+=1); 
}

void Call_Auto() // 함수정의2
{
	auto int number = 1;  // 자동변수: 메모리에 초기치가 할당되어도 프로그램이 종료되면 저장된 값이 소실됨 => C 언어의 특징: 메모리용량 감축가능
    printf("Number의 값은 \"%d\"입니다.\n\n", number+=1);  
}