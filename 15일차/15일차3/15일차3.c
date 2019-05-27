// 프로그램 목적: 구조체의 선언 및 기본 문법
#include <stdio.h>

// 전역변수 선언: main 바깥이므로 전역변수 => 변수를 각각 선언하지 않아도 되는 간편함
struct list // 1) 구조체 선언: struct list자체는 "구조체명" => 레코드의 구성자료형 선언
{ // 구조체선언: "struct list"는 "구조체명"으로 일종의 자료형 선언(어느 요소를 포함한 구조체인지)과 유사 => 레코드의 자료형
	char name; // 구조체 멤버 1: struct list를 구성하는 하위요소 1 => 3) 구조체 멤버 선언: name, sex, age는 "구조체 멤버명" => 구조체를 구성하는 요소의 변수명
	char sex;  // 구조체 멤버 2: struct list를 구성하는 하위요소 2
	int age;   // 구조체 멤버 3: struct list를 구성하는 하위요소 3
   // 참고) 구조체선언문안에 st1, st2와 같이 구조체변수선언을 할 수 있음
}; // 구조체 선언의 끝은 반드시 "세미콜론"을 필요로 함

int main(void) // main함수 시작
{
	// 2) 구조체 변수선언: st1, st2, tmp는 "구조체변수명" 
	// 구조체 변수선언과 동시에 초기화를 수행하는 경우
	struct list st1 = { 'T', 'M', 25 }; // 구조체 변수 선언 1 + 초기화
	st1.name = 'A'; // 구조체변수의 제 1 멤버변수의 초기값 'T'를 'A'로 갱신함 => 변수이기 때문에 값 갱신이 가능함 
	
	// 구조체 변수선언 이후에 초기화하는 경우
	struct list st2, tmp; // 구조체 변수 선언 2 
	st2.name = 'S'; // 구조체 변수 2의 초기화 1
	st2.sex = 'F'; // 구조체 변수 2의 초기화 2 
	st2.age = 28; // 구조체 변수 2의 초기화 3

	// 구조체의 Swap
	tmp = st1; // 구조체 변수 tmp에 st1의 값 저장
	st1 = st2; // 구조체 변수 st1에 st2의 값 저장
	st2 = tmp; // 구조체 변수 st2에 tmp에 저장된 st1의 값 저장

	// 자료 출력
	printf("이름 성별 나이 \n");
	printf("=============== \n");
	printf("  %c   %c   %d\n", st1.name, st1.sex, st1.age);
	printf("  %c   %c   %d\n", st2.name, st2.sex, st2.age);

	return 0; // 실행종료
} // main함수 종료

// 구조체의 유용성: 서로 다른 자료형을 레코드형태로 묶어서 한꺼번에 관리할 수 있게 해줌