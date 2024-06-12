#include <stdio.h>
#include <stdbool.h>
// boolean data type을 쓰기 위해서는 stdbool.h를 넣어주어야!
int main() {
    // 여기에 코드를 작성해주세요

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // c의 배수 유무를 알려줄 satisfied 변수 boolean type으로 선언
    bool satisfied = false;

    // a에서 b까지 iteration을 통해서 c의 배수가 있는지 확인한다
    // c의 배수가 존재할 경우 satisfied의 값을 true로 바꾼다
    for ( int i = a; i <= b; i++ ){
        if ( i % c == 0 ){
            satisfied = true;
        }
    }

    // satisfied의 값이 true일 경우 YES 출력, 아닐 경우 NO 출력
    // 자꾸 대입 연산자랑 체크하는 연산자랑 실수하는데 주의하자!
    if ( satisfied == true ) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}