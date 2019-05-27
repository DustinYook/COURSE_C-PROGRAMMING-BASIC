#include <stdio.h>
#include <string.h> // strcmp함수 사용위한 전처리기

int main(void)
{
	char n[11][10]; // 사람이름: 10명, 최대 10글자 
	int p[11]; // 출장비
	int pm[11]; // 개인화폐 매수
	int tm[11] = { 0 }; // 전체화폐 매수

	int i = 1, j = 0, k = 0, l = 0; // 제어변수 
	int cnt = 0;
	int p1 = 0; // 출장비 기억 후 계산변수
	int sw = 0; // 번갈아 가면서 화폐단위 변환
	int m; // 화폐단위: 50000 -> 10000 -> ...


	while (1)
	{
		printf("직원이름과 출장비를 입력해주십시오: ");
		scanf_s("%s", n[i], sizeof(n[i])); // 이름입력
		if (strcmp(n[i], "QUIT") == 0)
			break; // 무한루프 탈출
		scanf_s("%d", &p[i]); // 출장비입력
		i++;
	}
	printf("  성명    출장비   오만원   만원   오천원   천원   오백원   백원   오십원   십원   오원   일원\n");
	printf("----------------------------------------------------------------------------------------------\n");
	cnt = i - 1; // cnt는 실제 입력받은 개수: i를 0이 아닌 1로 해서 발생하는 문제
	for (i = 1; i <= cnt; i++)
	{
		p1 = p[i]; // 547630
		m = 50000;
		sw = 1;

		for (j = 1; j <= 10; j++) // 화폐단위 10개
		{
			// printf("%4d %10d\n", sw, m); // 중간중간 확인하는 것 중요
			// printf("%10d\n", p1);
			pm[j] = p1 / m; // pm = 50000 * 10
			tm[j] += pm[j];
			p1 = p1 - pm[j] * m; // 전체에서 매수 센 액수 뺌 // 547630 - 50000 * 10
			if (sw == 1) // pulse 이용
			{
				m = m / 5;
				sw = 0;
			}
			else
			{
				m = m / 2;
				sw = 1;
			}
		} // for문 마지막
		printf(" %s %10d ", n[i], p[i]);
		for (k = 1; k <= 10; k++)
			printf("%7d", pm[k]);
		printf("\n");
	}
	printf("----------------------------------------------------------------------------------------------\n");
	printf("전체화폐매수:   ");
	for (i = 1; i <= 10; i++)
		printf("%10d", tm[i]);
	printf("\n");

	return 0;
}