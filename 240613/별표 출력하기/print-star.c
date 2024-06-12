#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    /*
    i = 0일 때 별의 개수 1개 
    i = 1일 때 별의 개수 2개
    i = 2일 때 별의 개수 3개
    i = 3일 때 별의 개수 4개
    i = 4일 때 별의 개수 5개
    i = 5일 때 별의 개수 6개
    */

    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }


    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= n - i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}