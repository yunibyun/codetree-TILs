#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    // 입력받을 정수 n을 초기화한다
    int n;
    // 합을 저장할 sum 변수를 초기화한다 (반드시 값을 0으로 초기화)
    int sum = 0;

    // 100 이하의 정수 n을 입력받는다
    scanf("%d", &n);

    // loop을 이용하여서 n부터 100까지의 합을 sum 변수에 저장한다
    for (int i = n; i <= 100; i++){
        sum += i;
    }

    // 저장한 합을 출력한다
    printf("%d", sum);
    return 0;
}