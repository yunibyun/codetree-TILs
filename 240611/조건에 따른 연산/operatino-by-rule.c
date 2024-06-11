#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;
    scanf("%d", &n);
 
    // n이 1000 이상이 되면 루프를 종료하기
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

    printf("%d", cnt);

    return 0;
}