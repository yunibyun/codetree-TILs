#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    // 조건을 하나라도 만족하지 않는 경우가 있는지 확인하기 위해서 변수를 true로 선언
    bool satisfied = true;
    // 만족하지 않는 경우가 있다면 if 조건문 안에서 변수가 false 값으로 바뀌게 함 
    scanf("%d %d %d", &a, &b, &c);

    // a이상 b이하에 c의 배수가 없는지 확인하기 위해서
    // a부터 b까지 for문을 이용해 iteration 후에 c의 배수가 있을 경우 satisfied의 값을 false로 바꾼다
    for (int i = a; i <= b; i++){
        if ( i % c == 0 ){
            satisfied = false;
        }
    }

    if ( satisfied == true ){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}