#include <stdio.h>

int main() {
    // 변수 선언
    int a, cnt = 0;

	// 입력
	for(int i = 1; i <= 5; i++) {
		scanf("%d", &a);
		
		if(a % 2 == 0)
			cnt++;
	}
    
    // 출력
	printf("%d", cnt);

    return 0;
}