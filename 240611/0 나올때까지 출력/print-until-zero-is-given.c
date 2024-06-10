#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    // 입력을 몇 번 받아야할 지 알 수 없을 때 while문을 이용한 무한 루프를 활용
    // while(1)
    // 무한 루프를 만드는데 for loop 를 사용할 수도 있음. for loop 의 초기화식, 조건식, 증감식을 모두 생략하면 for 내부의 코드가 무한 반복됨
    // c에서 while (true) 를 사용하기 위해서는 #include <stdbool.h> 를 작성해주어야 함

    int n;
    // 0이 주어지기 전까지 루프 무한 반복, 결과를 한 줄에 하나씩 순서대로 출력
    while (1){
        scanf("%d\n", &n);
        if (n == 0){
            break;
        }
        printf("%d\n", n);
    }
    return 0;
}