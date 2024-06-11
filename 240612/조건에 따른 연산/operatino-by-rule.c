#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;
    scanf("%d", &n);
 
    // n이 1000 이상이 되면 루프를 종료하기
    /*
    굳이 if else if 이렇게 써서 안에 nested if를 쓸 필요 없이
    그냥 if가 1000 이상이면 break를 첫 줄에 써 주면 된다!
    while (1){
        if ( n < 1000 ){
            if ( n % 2 == 0){
                n = (n * 3) + 1;
                cnt++;
            } else if ( n % 2 == 1 ){
                n = (n * 2) + 2;
                cnt++;
            } 
        } else if ( n >= 1000 ){
            break;
        }
    } 
    */

    while(1) {
		// n이 1000이 될 때까지 연산을 반복합니다.
		if(n >= 1000)
			break;
		
		if(n % 2 == 1)
			n = 2 * n + 2;
		else
			n = 3 * n + 1;
		
		cnt++;
    }

    printf("%d", cnt);

    return 0;
}