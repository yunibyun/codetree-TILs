#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	int cnt = 1;
	
	// cnt를 이용해 n칸의 정사각형에 올바른 숫자를 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
	
	return 0;
}