#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 입력받을 정수 a 선언
    int a;
    // a 입력 받기
    scanf("%d", &a);
    
    // for문을 통해 1부터 a까지 iterate
    for (int i = 1; i <= a; i++){
        // 짝수이면서 4의 배수가 아닌 수, 8로 나눈 몫이 짝수인 수, 7로 나눈 나머지가 4보다 작은 수 걸러내기
        if ( ( i % 2 == 0 && i % 4 != 0 ) || (i / 8) % 2 == 0 || ( i % 7 ) < 4 ){
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}