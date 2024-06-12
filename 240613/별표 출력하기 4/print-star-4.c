#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 길이가 n인 직각삼각형 출력 (갈수록 별의 갯수가 줄어드는 형태)
    // n = 5라고 가정하면
    // i = 0일 때 j = 5 (n)
    // i = 1일 때 j = 4 (n - 1)
    // i = 2일 때 j = 3 (n - 2)
    // 일반화하면 j = n - i
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n - i; j++){
            printf("* ");
        }
        printf("\n");
    }    

    // 길이가 n - 1 개인 직각삼각형 출력 (갈수록 별의 갯수가 늘어나는 형태)
    for (int i = n - 1; 1 <= i; i--){
        for (int j = 0; j <= n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}