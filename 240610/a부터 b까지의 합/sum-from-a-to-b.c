#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    // 입력받는 변수 a, b 초기화
    // 총 합을 저장하는 변수 sum 초기화
    // 총합을 저장하는 변수는 반드시 값을 0으로 초기화
    int a, b;
    int sum = 0;
    
    // 변수 a와 b 입력받기
    scanf("%d %d", &a, &b);

    // a부터 b까지 Loop 이용하여 합을 sum에 저장한다
    for (int i = a; i <= b; i++){
        sum += i;
    }

    // 최종적으로 합을 저장한 sum 변수를 출력한다
    printf("%d", sum);
    return 0;
}