#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 n 선언
    int n;
    // 진행한 횟수를 세는 cnt 변수 선언, cnt는 항상 0으로 초기화
    int cnt = 0;

    // 변수 n 입력받기
    scanf("%d", &n);

    // 몫을 저장할 변수 a 선언;
    int a = n;

    // 충분하게 iteration 돌리기.. 근데 횟수는 주어지지 않았으므로 임의로 설정함
    for ( int i = 1 ; i <= 5000 ; i++ ){
        // a의 값을 i로 한번씩 나눈 다음에 cnt를 하나씩 올린다
        a /= i;
        cnt ++;
        if ( a <= 1 ) {
            // a가 1보다 적어지면 cnt 출력 이후 for문 탈출
            printf("%d", cnt);
            break;
        }
    }
    return 0;
}