// ���α׷� ����: "Call by Value"�� "Call by Reference"�� ���̸� ���� �����ͺ����� ���뼺 ����
#include <stdio.h> // call by value

void CV_Swap(int a, int b); // �Լ�����1: Call by Value (CV)
void CR_Swap(int* c, int* d); // �Լ�����2: Call by Reference (CR)

int main(void) // main�Լ� ����
{
	// ��������
	int input1 = 0, input2 = 0; // �Էº���

	while (1) // ���ǹ��� '1(��)'�̹Ƿ� ���ѷ��� ����
	{
		// �ڷ��Է�
		printf("���� �ٸ� �� ������ �Է����ֽʽÿ�: ");
		scanf_s("%d %d", &input1, &input2);

		// �Է±�Ģ �ؼ����� �Ǵ�
		if (input1 != input2)
			break; // �Է±�Ģ �ؼ� �� ���ѷ��� Ż��
		printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �� �� �Է����ֽʽÿ�.\n\n\a\a\a\a");
	}

	// �ڷ�ó�� �� ��� 1: ó�� ��
	printf("\n1) Swap()�Լ� ���� ��: input1 = %d, input2 = %d\n", input1, input2);
	printf("input1�� �ּҴ� \"%p\"�̰� input2�� �ּҴ� \"%p\"�Դϴ�.\n\n", &input1, &input2);
	
	// �ڷ�ó�� �� ��� 2: Call by Value (CV) 
	CV_Swap(input1, input2); // �Լ�ȣ��1: CV_Swap() ��� ���� ��� 
	printf("2-2) CV_Swap()�Լ� �ܺ�: input1 = %d, input2 = %d\n\n", input1, input2); // CV_Swap() ��� ���� ��� => a,b�� ���������̹Ƿ� ��ϳ����� ��ȿȭ

	// �ڷ�ó�� �� ��� 3: Call by Refrence (CR)
	CR_Swap(&input1, &input2); // �Լ�ȣ��2: CR_Swap() ��� ���� ���
	printf("3-2) CV_Swap()�Լ� �ܺ�: input1 = %d, input2 = %d\n\n", input1, input2); // CR_Swap() ��� ���� ��� => �ּҿ� ����� �� ��ü�� �ٲ㼭 ��ϳ����� ��ȿ��

	return 0; // ��������
} // main�Լ� ����

void CV_Swap(int a, int b) // �Լ�����1: Call by Value (CV)  
{ // main�Լ��� input1�� ���� a�� input2�� ���� b�� ���� => ���� ������ ���޵Ǹ� main�Լ��� ������ CV_Swap()�Լ��� ������ ���� ������ ������ (�ּҰ� �ٸ�)
  // (temp,a,b)
	int temp = a; // temp������ "a�� ����� ��(input1)" ���� => ���尪:(input1,input1,input2)/�ּҰ�:(&temp,&a,&b)
	a = b; // a������ "b�� ����� ��(input2)" ���� => ���尪:(input1,input2,input2)/�ּҰ�:(&temp,&a,&b)
	b = temp; // b������  "temp�� ����� ��(input1)" ���� => ���尪:(input1,input2,input1)/�ּҰ�:(&temp,&a,&b)
	printf("2-1) CV_Swap()�Լ� ����: a = %d, b = %d\n", a, b); // ��°�: a = input2�� ��, b = input1�� �� 
	printf("=>  a�� �ּҴ� \"%p\"�̰� b�� �ּҴ� \"%p\"�Դϴ�.\n", &a, &b);
} // �߿�) a, b�� ���������̹Ƿ� ó���� ����� ���� CV_Swap()�Լ��� ��� �������� ��ȿ��

void CR_Swap(int* c, int* d) // �Լ�����2: Call by Reference (CR) 
{ // main�Լ��� input1�� �ּҰ��� �����ͺ��� c�� input2�� �ּҰ��� �����ͺ��� d�� ���� => �ּҰ��� ���޵Ǿ� main�Լ��� ������ CR_Swap()�Լ��� ������ ���� (��������)
  // (temp,c,d)/(input1,input2)=(*c,*d)
	int temp = *c; // temp������ "c�� ����� �ּҿ� ����� ��(input1)" ���� => CR �������尪:(input1,&input1,&input2)/ main �������尪:(input1,input2)
	*c = *d; // *c����(=input1����)�� "d�� ����� �ּҿ� ����� ��(input2)" ���� => CR �������尪:(input1,&input1,&input2)/ main �������尪:(input2,input2)
	*d = temp; // *d����(=input2����)�� "temp�� ����� ��(input1)" ���� => CR �������尪:(input1,&input1,&input2)/ main �������尪:(input2,input1)
	printf("3-1) CR_Swap()�Լ� ����: *c = %d, *d = %d\n", *c, *d); // ��°�: *c(=input1����)=input2�� ��, *d(=input2����)=input1�� �� 
	printf("=>  *c�� ���尪�� \"%p\"�̰� *d�� ���尪�� \"%p\"�Դϴ�.\n", c, d);
	printf("=>  c�� �ּҴ� \"%p\"�̰� d�� �ּҴ� \"%p\"�Դϴ�.\n", &c, &d);
}
// �߿�) ����������Լ� ������ main�Լ��� ������ �������� ���� ������ ������ ������ => ���� return(��������)�� ����ϳ� �̰� ����ġ ������ �����ͺ����� �̿��Ͽ� �������� ����
// call by reference ���� ���� vs call by value�� ��� ����