#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 n 선언 후 값 입력받기
    int n;
    scanf("%d", &n);
    
    // 윤년을 세기 위한 count 변수 선
    int cnt = 0;
    // n년까지 for loop 돌리기
    for (int i = 1; i <= n; i++ ){
        // 윤년 찾기 (4로 나누어 떨어지는 해)
        if ( i % 4 == 0 ){
            cnt ++; 
            if ( i % 100 == 0 && i % 400 != 0 ){
                cnt --;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}