#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    int width, height;

    while (1){
        // 가로와 세로, 문자 입력 받기
        scanf("%d %d %c\n", &width, &height, &a);
        // 넓이 출력하기 (가로*세로)
        printf("%d\n", width * height);
        // 문자가 c일 경우 루프 탈출
        if ( a == 'C' ){
            break;
        }
    }
    return 0;
}