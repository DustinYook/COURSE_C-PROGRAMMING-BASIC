#include <stdio.h> // call by reference

void Swap(int* a, int* b); 

int main(void)
{
	int x = 10, y = 5; // x=100번지, y=200번지

	printf("Swap()함수 실행 전: ");
	printf("x = %d, y = %d이다.\n\n", x, y);

	Swap(&x, &y); // 함수호출: 사용자정의함수에 주소값을 전달
	printf("Swap()함수 실행 후: ");
	printf("x = %d, y = %d이다.\n\n", x, y);

	return 0;
}

void Swap(int* a, int* b) // a는 100번지, b는 200번지 전달 => 주소값 전달 
{
	int temp = *a; // temp변수에 100번지에 저장된 '10'의 값을 저장
	*a = *b; // x변수에 y에 저장된 값 '5'가 할당
	*b = temp;
	printf("Swap()내 a = %d, b = %d이다.\n\n", a, b);
}
