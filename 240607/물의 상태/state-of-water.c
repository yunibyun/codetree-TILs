#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int temp;
    scanf("%d", &temp);
    if ( temp < 0 ) {
        printf("ice");
    } else if ( temp >= 100 ) {
        printf("vapor");
    } else {
        printf("water");
    }
    return 0;
}