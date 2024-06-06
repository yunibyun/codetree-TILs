#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % 2 == 0){
        printf("even");
    } else {
        printf("odd");
    }

    if ( b % 2 == 0){
        printf("\neven");
    } else {
        printf("\nodd");
    }
    return 0;
}