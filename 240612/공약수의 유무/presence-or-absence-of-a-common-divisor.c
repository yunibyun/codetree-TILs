#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf ("%d %d", &a, &b);
    // 공약수의 존재 여부를 알려주는 satisfied 변수 선언
    bool satisfied = false;

    // a부터 b까지 iteration
    for ( int i = a; i <= b; i++ ){
        // 1920과 2880의 공약수를 어떻게 구할 수 있을까?
        // (1920 % i == 0) && (2880 % i == 0) 으로 구할 수 있지 않을까?
        if (1920 % i == 0 && 2880 % i == 0){
            satisfied = true;
        }
    }

    if (satisfied == true){
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}