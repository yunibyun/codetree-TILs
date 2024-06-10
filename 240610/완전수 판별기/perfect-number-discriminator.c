#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 주어지는 숫자 n에 대한 변수 선언
    int n;
    // 변수 n을 입력받기
    scanf("%d", &n);

    // 약수들의 합을 저장하기 위한 sum 변수 선언, 항상 값을 0으로 할당
    int sum = 0;

    // 약수 구하기
    // 1부터 n까지의 수를 for 반복문을 이용하여 iteration 하면서 나머지가 0이 되는지 확인한다
    for (int i = 1; i <= n ; i++){
        // 만약에 나누어 떨어진다면 (나머지가 0이라면) sum에 합한다
        if ( n % i == 0 && i != n ){
            sum += i;
        }
    }
    
    // sum과 n이 같은지 확인한 후 같다면 P, 아니라면 N을 출력한다
    sum == n ? printf("P") : printf("N");
    return 0;
}