#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 밑으로 갈수록 커지는 직각삼각형 출력하기
    // 세로줄 (행) 의 갯수는 총 n개이므로 바깥 for문은 0부터 n 미만까지
    // 가로줄 (열) 에서는 i + 1 만큼의 별을 출력한다
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < i + 1; j++){
            printf("*");
        }
        printf("\n\n");
    }

    // 밑으로 갈 수록 작아지는 직각삼각형 출력하기
    // 세로줄 (행) 의 갯수는 총 n-1개이므로 바깥 for문은 0부터 n-1 미만까지
    // 가로줄 (열) 에서는 n - i개의 별 출력
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			printf("*");
		}
		printf("\n\n");
	}
    return 0;
}