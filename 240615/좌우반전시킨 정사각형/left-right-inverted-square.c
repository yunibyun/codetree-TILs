#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// 각 칸의 정사각형에 알맞은 값을 출력합니다.
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			printf("%d ", i * (n - j + 1));
		}
		printf("\n");
	}
	
	return 0;
}