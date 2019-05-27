// 프로그램 목적: "Call by Value"와 "Call by Reference"의 차이를 통한 포인터변수의 유용성 이해
#include <stdio.h> // call by value

void CV_Swap(int a, int b); // 함수선언1: Call by Value (CV)
void CR_Swap(int* c, int* d); // 함수선언2: Call by Reference (CR)

int main(void) // main함수 시작
{
	// 변수선언
	int input1 = 0, input2 = 0; // 입력변수

	while (1) // 조건문이 '1(참)'이므로 무한루프 생성
	{
		// 자료입력
		printf("서로 다른 두 정수를 입력해주십시오: ");
		scanf_s("%d %d", &input1, &input2);

		// 입력규칙 준수여부 판단
		if (input1 != input2)
			break; // 입력규칙 준수 시 무한루프 탈출
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\a\a\a\a");
	}

	// 자료처리 및 출력 1: 처리 전
	printf("\n1) Swap()함수 실행 전: input1 = %d, input2 = %d\n", input1, input2);
	printf("input1의 주소는 \"%p\"이고 input2의 주소는 \"%p\"입니다.\n\n", &input1, &input2);
	
	// 자료처리 및 출력 2: Call by Value (CV) 
	CV_Swap(input1, input2); // 함수호출1: CV_Swap() 블록 안의 결과 
	printf("2-2) CV_Swap()함수 외부: input1 = %d, input2 = %d\n\n", input1, input2); // CV_Swap() 블록 밖의 결과 => a,b는 지역변수이므로 블록나가면 무효화

	// 자료처리 및 출력 3: Call by Refrence (CR)
	CR_Swap(&input1, &input2); // 함수호출2: CR_Swap() 블록 안의 결과
	printf("3-2) CV_Swap()함수 외부: input1 = %d, input2 = %d\n\n", input1, input2); // CR_Swap() 블록 밖의 결과 => 주소에 저장된 값 자체를 바꿔서 블록나가도 유효힘

	return 0; // 실행종료
} // main함수 종료

void CV_Swap(int a, int b) // 함수정의1: Call by Value (CV)  
{ // main함수의 input1의 값은 a에 input2의 값은 b에 전달 => 오직 값만이 전달되며 main함수의 변수와 CV_Swap()함수의 변수는 완전 별개의 변수임 (주소값 다름)
  // (temp,a,b)
	int temp = a; // temp변수에 "a에 저장된 값(input1)" 저장 => 저장값:(input1,input1,input2)/주소값:(&temp,&a,&b)
	a = b; // a변수에 "b에 저장된 값(input2)" 저장 => 저장값:(input1,input2,input2)/주소값:(&temp,&a,&b)
	b = temp; // b변수에  "temp에 저장된 값(input1)" 저장 => 저장값:(input1,input2,input1)/주소값:(&temp,&a,&b)
	printf("2-1) CV_Swap()함수 내부: a = %d, b = %d\n", a, b); // 출력값: a = input2의 값, b = input1의 값 
	printf("=>  a의 주소는 \"%p\"이고 b의 주소는 \"%p\"입니다.\n", &a, &b);
} // 중요) a, b는 지역변수이므로 처리된 결과는 오직 CV_Swap()함수의 블록 내에서만 유효함

void CR_Swap(int* c, int* d) // 함수정의2: Call by Reference (CR) 
{ // main함수의 input1의 주소값을 포인터변수 c에 input2의 주소값을 포인터변수 d에 전달 => 주소값이 전달되어 main함수의 변수와 CR_Swap()함수의 변수는 연결 (간접참조)
  // (temp,c,d)/(input1,input2)=(*c,*d)
	int temp = *c; // temp변수에 "c에 저장된 주소에 저장된 값(input1)" 저장 => CR 변수저장값:(input1,&input1,&input2)/ main 변수저장값:(input1,input2)
	*c = *d; // *c변수(=input1변수)에 "d에 저장된 주소에 저장된 값(input2)" 저장 => CR 변수저장값:(input1,&input1,&input2)/ main 변수저장값:(input2,input2)
	*d = temp; // *d변수(=input2변수)에 "temp에 저장된 값(input1)" 저장 => CR 변수저장값:(input1,&input1,&input2)/ main 변수저장값:(input2,input1)
	printf("3-1) CR_Swap()함수 내부: *c = %d, *d = %d\n", *c, *d); // 출력값: *c(=input1변수)=input2의 값, *d(=input2변수)=input1의 값 
	printf("=>  *c의 저장값은 \"%p\"이고 *d의 저장값은 \"%p\"입니다.\n", c, d);
	printf("=>  c의 주소는 \"%p\"이고 d의 주소는 \"%p\"입니다.\n", &c, &d);
}
// 중요) 사용자정의함수 변수와 main함수의 변수는 변수명이 같다 할지라도 별개의 변수임 => 따라서 return(직접참조)을 사용하나 이게 여의치 않으면 포인터변수를 이용하여 간접참조 가능
// call by reference 사용시 연결 vs call by value의 경우 별개