#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// n칸의 정사각형에 올바른 숫자를 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", i * 2 + j * 2 + 11);
		}
		printf("\n");
	}
	
	return 0;
}