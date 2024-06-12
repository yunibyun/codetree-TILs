#include<stdio.h>

int main() {
	// 변수 선언 및 입력
	int n;
	scanf("%d", &n);

	// 길이가 n인 직각삼각형을 출력
	// 행의 갯수 (세로줄) 이 n개이므로 0부터 n 미만까지 바깥 for 문 작성
	for(int i = 0; i < n; i++) {
		// 각 열에서는 2i + 1 만큼의 별을 출력해야하므로 j는 0부터 2i + 1 미만까지 for 문 작성
		for(int j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}